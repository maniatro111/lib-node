// This file is generated by Protocol_cpp.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/inspector/protocol/Protocol.h"

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>


// This file is generated by Values_cpp.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

//#include "Values.h"

#include "../../deps/v8/third_party/inspector_protocol/crdtp/cbor.h"

namespace v8_inspector {
namespace protocol {

namespace {
using v8_crdtp::Status;
using v8_crdtp::ParserHandler;
using v8_crdtp::span;
namespace cbor {
using v8_crdtp::cbor::ParseCBOR;
using v8_crdtp::cbor::EncodeBinary;
using v8_crdtp::cbor::EncodeDouble;
using v8_crdtp::cbor::EncodeFalse;
using v8_crdtp::cbor::EncodeFromLatin1;
using v8_crdtp::cbor::EncodeFromUTF16;
using v8_crdtp::cbor::EncodeIndefiniteLengthArrayStart;
using v8_crdtp::cbor::EncodeIndefiniteLengthMapStart;
using v8_crdtp::cbor::EncodeInt32;
using v8_crdtp::cbor::EncodeNull;
using v8_crdtp::cbor::EncodeStop;
using v8_crdtp::cbor::EncodeString8;
using v8_crdtp::cbor::EncodeTrue;
using v8_crdtp::cbor::EnvelopeEncoder;
using v8_crdtp::cbor::InitialByteForEnvelope;
}  // namespace cbor

// Uses the parsing events received from driver of |ParserHandler|
// (e.g. cbor::ParseCBOR) into a protocol::Value instance.
class ValueParserHandler : public ParserHandler {
 public:
   // Provides the parsed protocol::Value.
   std::unique_ptr<Value> ReleaseRoot() { return std::move(root_); }

   // The first parsing error encountered; |status().ok()| is the default.
   Status status() const { return status_; }

 private:
  //
  // Implementation of  ParserHandler.
  //
  void HandleMapBegin() override {
    if (!status_.ok()) return;
    std::unique_ptr<DictionaryValue> dict = DictionaryValue::create();
    DictionaryValue* dict_ptr = dict.get();
    AddValueToParent(std::move(dict));
    stack_.emplace_back(dict_ptr);
  }

  void HandleMapEnd() override {
    if (!status_.ok()) return;
    DCHECK(!stack_.empty());
    DCHECK(stack_.back().is_dict);
    stack_.pop_back();
  }

  void HandleArrayBegin() override {
    if (!status_.ok()) return;
    std::unique_ptr<ListValue> list = ListValue::create();
    ListValue* list_ptr = list.get();
    AddValueToParent(std::move(list));
    stack_.emplace_back(list_ptr);
  }

  void HandleArrayEnd() override {
    if (!status_.ok()) return;
    DCHECK(!stack_.empty());
    DCHECK(!stack_.back().is_dict);
    stack_.pop_back();
  }

  void HandleString8(span<uint8_t> chars) override {
    AddStringToParent(StringUtil::fromUTF8(chars.data(), chars.size()));
  }

  void HandleString16(span<uint16_t> chars) override {
    AddStringToParent(
        StringUtil::fromUTF16LE(chars.data(), chars.size()));
  }

  void HandleBinary(span<uint8_t> bytes) override {
    AddValueToParent(
        BinaryValue::create(Binary::fromSpan(bytes.data(), bytes.size())));
  }

  void HandleDouble(double value) override {
    AddValueToParent(FundamentalValue::create(value));
  }

  void HandleInt32(int32_t value) override {
    AddValueToParent(FundamentalValue::create(value));
  }

  void HandleBool(bool value) override {
    AddValueToParent(FundamentalValue::create(value));
  }

  void HandleNull() override {
    AddValueToParent(Value::null());
  }

  void HandleError(Status error) override {
    status_ = error;
  }

  //
  // Adding strings and values to the parent value.
  // Strings are handled separately because they can be keys for
  // dictionary values.
  //
  void AddStringToParent(String str) {
    if (!status_.ok()) return;
    if (!root_) {
      DCHECK(!key_is_pending_);
      root_ = StringValue::create(str);
    } else if (stack_.back().is_dict) {
      // If we already have a pending key, then this is the value of the
      // key/value pair. Otherwise, it's the new pending key.
      if (key_is_pending_) {
        stack_.back().dict->setString(pending_key_, str);
        key_is_pending_ = false;
      } else {
        pending_key_ = std::move(str);
        key_is_pending_ = true;
      }
    } else {  // Top of the stack is a list.
      DCHECK(!key_is_pending_);
      stack_.back().list->pushValue(StringValue::create(str));
    }
  }

  void AddValueToParent(std::unique_ptr<Value> value) {
    if (!status_.ok()) return;
    if (!root_) {
      DCHECK(!key_is_pending_);
      root_ = std::move(value);
    } else if (stack_.back().is_dict) {
      DCHECK(key_is_pending_);
      stack_.back().dict->setValue(pending_key_, std::move(value));
      key_is_pending_ = false;
    } else {  // Top of the stack is a list.
      DCHECK(!key_is_pending_);
      stack_.back().list->pushValue(std::move(value));
    }
  }

  // |status_.ok()| is the default; if we receive an error event
  // we keep the first one and stop modifying any other state.
  Status status_;

  // The root of the parsed protocol::Value tree.
  std::unique_ptr<Value> root_;

  // If root_ is a list or a dictionary, this stack keeps track of
  // the container we're currently parsing as well as its ancestors.
  struct ContainerState {
    ContainerState(DictionaryValue* dict) : is_dict(true), dict(dict) {}
    ContainerState(ListValue* list) : is_dict(false), list(list) {}

    bool is_dict;
    union {
      DictionaryValue* dict;
      ListValue* list;
    };
  };
  std::vector<ContainerState> stack_;

  // For maps, keys and values are alternating events, so we keep the
  // key around and process it when the value arrives.
  bool key_is_pending_ = false;
  String pending_key_;
};
} // anonymous namespace

// static
std::unique_ptr<Value> Value::parseBinary(const uint8_t* data, size_t size) {
  ValueParserHandler handler;
  cbor::ParseCBOR(span<uint8_t>(data, size), &handler);
  // TODO(johannes): We have decent error info in handler.status(); provide
  // a richer interface that makes this available to client code.
  if (handler.status().ok())
    return handler.ReleaseRoot();
  return nullptr;
}

bool Value::asBoolean(bool*) const
{
    return false;
}

bool Value::asDouble(double*) const
{
    return false;
}

bool Value::asInteger(int*) const
{
    return false;
}

bool Value::asString(String*) const
{
    return false;
}

bool Value::asBinary(Binary*) const
{
    return false;
}

void Value::AppendSerialized(std::vector<uint8_t>* bytes) const {
    DCHECK(m_type == TypeNull);
    bytes->push_back(cbor::EncodeNull());
}

std::unique_ptr<Value> Value::clone() const
{
    return Value::null();
}

bool FundamentalValue::asBoolean(bool* output) const
{
    if (type() != TypeBoolean)
        return false;
    *output = m_boolValue;
    return true;
}

bool FundamentalValue::asDouble(double* output) const
{
    if (type() == TypeDouble) {
        *output = m_doubleValue;
        return true;
    }
    if (type() == TypeInteger) {
        *output = m_integerValue;
        return true;
    }
    return false;
}

bool FundamentalValue::asInteger(int* output) const
{
    if (type() != TypeInteger)
        return false;
    *output = m_integerValue;
    return true;
}

void FundamentalValue::AppendSerialized(std::vector<uint8_t>* bytes) const {
    switch (type()) {
    case TypeDouble:
        cbor::EncodeDouble(m_doubleValue, bytes);
        return;
    case TypeInteger:
        cbor::EncodeInt32(m_integerValue, bytes);
        return;
    case TypeBoolean:
        bytes->push_back(m_boolValue ? cbor::EncodeTrue() : cbor::EncodeFalse());
        return;
    default:
        DCHECK(false);
    }
}

std::unique_ptr<Value> FundamentalValue::clone() const
{
    switch (type()) {
    case TypeDouble: return FundamentalValue::create(m_doubleValue);
    case TypeInteger: return FundamentalValue::create(m_integerValue);
    case TypeBoolean: return FundamentalValue::create(m_boolValue);
    default:
        DCHECK(false);
    }
    return nullptr;
}

bool StringValue::asString(String* output) const
{
    *output = m_stringValue;
    return true;
}

namespace {
// This routine distinguishes between the current encoding for a given
// string |s|, and calls encoding routines that will
// - Ensure that all ASCII strings end up being encoded as UTF8 in
//   the wire format - e.g., EncodeFromUTF16 will detect ASCII and
//   do the (trivial) transcode to STRING8 on the wire, but if it's
//   not ASCII it'll do STRING16.
// - Select a format that's cheap to convert to. E.g., we don't
//   have LATIN1 on the wire, so we call EncodeFromLatin1 which
//   transcodes to UTF8 if needed.
void EncodeString(const String& s, std::vector<uint8_t>* out) {
  if (StringUtil::CharacterCount(s) == 0) {
    cbor::EncodeString8(span<uint8_t>(nullptr, 0), out);  // Empty string.
  } else if (StringUtil::CharactersLatin1(s)) {
    cbor::EncodeFromLatin1(span<uint8_t>(StringUtil::CharactersLatin1(s),
		                         StringUtil::CharacterCount(s)),
                           out);
  } else if (StringUtil::CharactersUTF16(s)) {
    cbor::EncodeFromUTF16(span<uint16_t>(StringUtil::CharactersUTF16(s),
                                         StringUtil::CharacterCount(s)),
                          out);
  } else if (StringUtil::CharactersUTF8(s)) {
    cbor::EncodeString8(span<uint8_t>(StringUtil::CharactersUTF8(s),
                                      StringUtil::CharacterCount(s)),
                        out);
  }
}
}  // namespace
void StringValue::AppendSerialized(std::vector<uint8_t>* bytes) const {
  EncodeString(m_stringValue, bytes);
}

std::unique_ptr<Value> StringValue::clone() const
{
    return StringValue::create(m_stringValue);
}

bool BinaryValue::asBinary(Binary* output) const
{
    *output = m_binaryValue;
    return true;
}

void BinaryValue::AppendSerialized(std::vector<uint8_t>* bytes) const {
    cbor::EncodeBinary(span<uint8_t>(m_binaryValue.data(),
                                     m_binaryValue.size()), bytes);
}

std::unique_ptr<Value> BinaryValue::clone() const
{
    return BinaryValue::create(m_binaryValue);
}


DictionaryValue::~DictionaryValue()
{
}

void DictionaryValue::setBoolean(const String& name, bool value)
{
    setValue(name, FundamentalValue::create(value));
}

void DictionaryValue::setInteger(const String& name, int value)
{
    setValue(name, FundamentalValue::create(value));
}

void DictionaryValue::setDouble(const String& name, double value)
{
    setValue(name, FundamentalValue::create(value));
}

void DictionaryValue::setString(const String& name, const String& value)
{
    setValue(name, StringValue::create(value));
}

void DictionaryValue::setValue(const String& name, std::unique_ptr<Value> value)
{
    set(name, value);
}

void DictionaryValue::setObject(const String& name, std::unique_ptr<DictionaryValue> value)
{
    set(name, value);
}

void DictionaryValue::setArray(const String& name, std::unique_ptr<ListValue> value)
{
    set(name, value);
}

bool DictionaryValue::getBoolean(const String& name, bool* output) const
{
    protocol::Value* value = get(name);
    if (!value)
        return false;
    return value->asBoolean(output);
}

bool DictionaryValue::getInteger(const String& name, int* output) const
{
    Value* value = get(name);
    if (!value)
        return false;
    return value->asInteger(output);
}

bool DictionaryValue::getDouble(const String& name, double* output) const
{
    Value* value = get(name);
    if (!value)
        return false;
    return value->asDouble(output);
}

bool DictionaryValue::getString(const String& name, String* output) const
{
    protocol::Value* value = get(name);
    if (!value)
        return false;
    return value->asString(output);
}

DictionaryValue* DictionaryValue::getObject(const String& name) const
{
    return DictionaryValue::cast(get(name));
}

protocol::ListValue* DictionaryValue::getArray(const String& name) const
{
    return ListValue::cast(get(name));
}

protocol::Value* DictionaryValue::get(const String& name) const
{
    Dictionary::const_iterator it = m_data.find(name);
    if (it == m_data.end())
        return nullptr;
    return it->second.get();
}

DictionaryValue::Entry DictionaryValue::at(size_t index) const
{
    const String key = m_order[index];
    return std::make_pair(key, m_data.find(key)->second.get());
}

bool DictionaryValue::booleanProperty(const String& name, bool defaultValue) const
{
    bool result = defaultValue;
    getBoolean(name, &result);
    return result;
}

int DictionaryValue::integerProperty(const String& name, int defaultValue) const
{
    int result = defaultValue;
    getInteger(name, &result);
    return result;
}

double DictionaryValue::doubleProperty(const String& name, double defaultValue) const
{
    double result = defaultValue;
    getDouble(name, &result);
    return result;
}

void DictionaryValue::remove(const String& name)
{
    m_data.erase(name);
    m_order.erase(std::remove(m_order.begin(), m_order.end(), name), m_order.end());
}

void DictionaryValue::AppendSerialized(std::vector<uint8_t>* bytes) const {
    cbor::EnvelopeEncoder encoder;
    encoder.EncodeStart(bytes);
    bytes->push_back(cbor::EncodeIndefiniteLengthMapStart());
    for (size_t i = 0; i < m_order.size(); ++i) {
        const String& key = m_order[i];
        Dictionary::const_iterator value = m_data.find(key);
        DCHECK(value != m_data.cend() && value->second);
        EncodeString(key, bytes);
        value->second->AppendSerialized(bytes);
    }
    bytes->push_back(cbor::EncodeStop());
    encoder.EncodeStop(bytes);
}

std::unique_ptr<Value> DictionaryValue::clone() const
{
    std::unique_ptr<DictionaryValue> result = DictionaryValue::create();
    for (size_t i = 0; i < m_order.size(); ++i) {
        String key = m_order[i];
        Dictionary::const_iterator value = m_data.find(key);
        DCHECK(value != m_data.cend() && value->second);
        result->setValue(key, value->second->clone());
    }
    return result;
}

DictionaryValue::DictionaryValue()
    : Value(TypeObject)
{
}

ListValue::~ListValue()
{
}

void ListValue::AppendSerialized(std::vector<uint8_t>* bytes) const {
    cbor::EnvelopeEncoder encoder;
    encoder.EncodeStart(bytes);
    bytes->push_back(cbor::EncodeIndefiniteLengthArrayStart());
    for (size_t i = 0; i < m_data.size(); ++i) {
        m_data[i]->AppendSerialized(bytes);
    }
    bytes->push_back(cbor::EncodeStop());
    encoder.EncodeStop(bytes);
}

std::unique_ptr<Value> ListValue::clone() const
{
    std::unique_ptr<ListValue> result = ListValue::create();
    for (const std::unique_ptr<protocol::Value>& value : m_data)
        result->pushValue(value->clone());
    return result;
}

ListValue::ListValue()
    : Value(TypeArray)
{
}

void ListValue::pushValue(std::unique_ptr<protocol::Value> value)
{
    DCHECK(value);
    m_data.push_back(std::move(value));
}

protocol::Value* ListValue::at(size_t index)
{
    DCHECK_LT(index, m_data.size());
    return m_data[index].get();
}

} // namespace v8_inspector
} // namespace protocol


// This file is generated by Object_cpp.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

//#include "Object.h"

namespace v8_inspector {
namespace protocol {

std::unique_ptr<Object> Object::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    protocol::DictionaryValue* dictionary = DictionaryValue::cast(value);
    if (!dictionary) {
        errors->AddError("object expected");
        return nullptr;
    }
    dictionary = static_cast<protocol::DictionaryValue*>(dictionary->clone().release());
    return std::unique_ptr<Object>(new Object(std::unique_ptr<DictionaryValue>(dictionary)));
}

// Implements Serializable.
void Object::AppendSerialized(std::vector<uint8_t>* out) const {
    m_object->AppendSerialized(out);
}

std::unique_ptr<protocol::DictionaryValue> Object::toValue() const
{
    return DictionaryValue::cast(m_object->clone());
}

std::unique_ptr<Object> Object::clone() const
{
    return std::unique_ptr<Object>(new Object(DictionaryValue::cast(m_object->clone())));
}

Object::Object(std::unique_ptr<protocol::DictionaryValue> object) : m_object(std::move(object)) { }

Object::~Object() { }

} // namespace v8_inspector
} // namespace protocol


// This file is generated by ValueConversions_cpp.template.

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/inspector/protocol/Protocol.h"

#include <algorithm>
#include <climits>
#include <string>

//#include "ValueConversions.h"
//#include "Values.h"

namespace v8_inspector {
namespace protocol {

}  // namespace
}  // namespace


namespace v8_crdtp {

namespace {

using v8_inspector::protocol::Binary;
using v8_inspector::protocol::Object;
using v8_inspector::protocol::Value;
using v8_inspector::protocol::String;
using v8_inspector::protocol::DictionaryValue;
using v8_inspector::protocol::FundamentalValue;
using v8_inspector::protocol::StringValue;
using v8_inspector::protocol::StringUtil;
//using v8_inspector::protocol::EncodeString;

std::unique_ptr<Value> ReadValue(DeserializerState* state) {
  cbor::CBORTokenizer* tokenizer = state->tokenizer();
  switch (tokenizer->TokenTag()) {
    case cbor::CBORTokenTag::TRUE_VALUE:
      return FundamentalValue::create(true);
    case cbor::CBORTokenTag::FALSE_VALUE:
      return FundamentalValue::create(false);
    case cbor::CBORTokenTag::NULL_VALUE:
      return Value::null();
    case cbor::CBORTokenTag::INT32:
      return FundamentalValue::create(tokenizer->GetInt32());
    case cbor::CBORTokenTag::DOUBLE:
      return FundamentalValue::create(tokenizer->GetDouble());
    case cbor::CBORTokenTag::STRING8: {
      const auto str = tokenizer->GetString8();
      return StringValue::create(StringUtil::fromUTF8(str.data(), str.size()));
    }
    case cbor::CBORTokenTag::STRING16: {
      const auto str = tokenizer->GetString16WireRep();
      return StringValue::create(StringUtil::fromUTF16LE(reinterpret_cast<const uint16_t*>(str.data()), str.size() / 2));
    }
    case cbor::CBORTokenTag::ENVELOPE: {
      const auto env = tokenizer->GetEnvelope();
      return Value::parseBinary(env.data(), env.size());
    }
    // Intentionally not supported.
    case cbor::CBORTokenTag::BINARY:
    // Should not be encountered outside of envelope.
    case cbor::CBORTokenTag::MAP_START:
    case cbor::CBORTokenTag::ARRAY_START:
    default:
      state->RegisterError(Error::CBOR_UNSUPPORTED_VALUE);
      return nullptr;
  }
}

}  // namespace

// static
bool ProtocolTypeTraits<std::unique_ptr<Value>>::Deserialize(
    DeserializerState* state, std::unique_ptr<Value>* value) {
  auto result = ReadValue(state);
  if (!result)
    return false;
  *value = std::move(result);
  return true;
}

// static
void ProtocolTypeTraits<std::unique_ptr<Value>>::Serialize(
    const std::unique_ptr<Value>& value, std::vector<uint8_t>* bytes) {
  value->AppendSerialized(bytes);
}

// static
bool ProtocolTypeTraits<std::unique_ptr<DictionaryValue>>::Deserialize(
    DeserializerState* state, std::unique_ptr<DictionaryValue>* value) {
  std::unique_ptr<Value> res;
  if (!ProtocolTypeTraits<std::unique_ptr<Value>>::Deserialize(state, &res))
    return false;
  if (res->type() != Value::TypeObject) {
    state->RegisterError(Error::BINDINGS_DICTIONARY_VALUE_EXPECTED);
    return false;
  }
  *value = DictionaryValue::cast(std::move(res));
  return true;
}

// static
void ProtocolTypeTraits<std::unique_ptr<DictionaryValue>>::Serialize(
    const std::unique_ptr<DictionaryValue>& value, std::vector<uint8_t>* bytes) {
  value->AppendSerialized(bytes);
}

// static
bool ProtocolTypeTraits<std::unique_ptr<Object>>::Deserialize(DeserializerState* state, std::unique_ptr<Object>* value) {
  auto res = DictionaryValue::create();
  if (ProtocolTypeTraits<std::unique_ptr<DictionaryValue>>::Deserialize(state, &res)) {
    *value = std::make_unique<Object>(std::move(res));
    return true;
  }
  return false;
}

void ProtocolTypeTraits<std::unique_ptr<Object>>::Serialize(const std::unique_ptr<Object>& value, std::vector<uint8_t>* bytes) {
  value->AppendSerialized(bytes);
}

}  // namespace v8_crdtp
