// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(SeqOneByteString p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(SeqTwoByteString p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
inline intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(SeqOneByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp1 = (p_o).ReadField<int32_t>(tmp0);
  tmp2 = TqRuntimeConvert_intptr_int32_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x10ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewConstSlice_char8_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(SeqTwoByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp1 = (p_o).ReadField<int32_t>(tmp0);
  tmp2 = TqRuntimeConvert_intptr_int32_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x10ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewConstSlice_char16_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(p_i);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_intptr_0((TorqueRuntimeMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(p_i)));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=19&c=9
template<class D, class P>
int32_t TorqueGeneratedString<D, P>::length() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=19&c=9
template<class D, class P>
void TorqueGeneratedString<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=50&c=3
template<class D, class P>
String TorqueGeneratedConsString<D, P>::first() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedConsString::first(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=50&c=3
template<class D, class P>
String TorqueGeneratedConsString<D, P>::first(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kFirstOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=50&c=3
template<class D, class P>
void TorqueGeneratedConsString<D, P>::set_first(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFirstOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=3
template<class D, class P>
String TorqueGeneratedConsString<D, P>::second() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedConsString::second(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=3
template<class D, class P>
String TorqueGeneratedConsString<D, P>::second(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kSecondOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=3
template<class D, class P>
void TorqueGeneratedConsString<D, P>::set_second(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSecondOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=38&c=1
template<class D, class P>
D TorqueGeneratedConsString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsConsString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsConsString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=54&c=1
template<class D, class P>
D TorqueGeneratedExternalString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExternalString<D, P>::TorqueGeneratedExternalString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExternalString<D, P>::TorqueGeneratedExternalString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExternalString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=76&c=1
template<class D, class P>
D TorqueGeneratedExternalOneByteString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExternalOneByteString<D, P>::TorqueGeneratedExternalOneByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalOneByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExternalOneByteString<D, P>::TorqueGeneratedExternalOneByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExternalOneByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=87&c=1
template<class D, class P>
D TorqueGeneratedExternalTwoByteString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExternalTwoByteString<D, P>::TorqueGeneratedExternalTwoByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalTwoByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExternalTwoByteString<D, P>::TorqueGeneratedExternalTwoByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExternalTwoByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=98&c=1
template<class D, class P>
D TorqueGeneratedInternalizedString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInternalizedString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalizedString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=102&c=1
template<class D, class P>
D TorqueGeneratedSeqString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
template<class D, class P>
char TorqueGeneratedSeqOneByteString<D, P>::chars(int i) const {
  char value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt8Size;
  value = this->template ReadField<char>(offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
template<class D, class P>
void TorqueGeneratedSeqOneByteString<D, P>::set_chars(int i, char value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt8Size;
  this->template WriteField<char>(offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=106&c=1
template<class D, class P>
D TorqueGeneratedSeqOneByteString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqOneByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqOneByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
template<class D, class P>
char16_t TorqueGeneratedSeqTwoByteString<D, P>::chars(int i) const {
  char16_t value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt16Size;
  value = this->template ReadField<char16_t>(offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
template<class D, class P>
void TorqueGeneratedSeqTwoByteString<D, P>::set_chars(int i, char16_t value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt16Size;
  this->template WriteField<char16_t>(offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=111&c=1
template<class D, class P>
D TorqueGeneratedSeqTwoByteString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqTwoByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqTwoByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=120&c=3
template<class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSlicedString::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=120&c=3
template<class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kParentOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=120&c=3
template<class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_parent(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=121&c=3
template<class D, class P>
int TorqueGeneratedSlicedString<D, P>::offset() const {
  int value;
  value = TaggedField<Smi>::load(*this, kOffsetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=121&c=3
template<class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_offset(int value) {
  WRITE_FIELD(*this, kOffsetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=117&c=1
template<class D, class P>
D TorqueGeneratedSlicedString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSlicedString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSlicedString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=127&c=3
template<class D, class P>
String TorqueGeneratedThinString<D, P>::actual() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedThinString::actual(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=127&c=3
template<class D, class P>
String TorqueGeneratedThinString<D, P>::actual(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kActualOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=127&c=3
template<class D, class P>
void TorqueGeneratedThinString<D, P>::set_actual(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kActualOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActualOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=124&c=1
template<class D, class P>
D TorqueGeneratedThinString<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsThinString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsThinString_NonInline(*this));
}
