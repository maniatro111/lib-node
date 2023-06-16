
/*
 * This file is generated by ../../deps/v8/tools/gen-postmortem-metadata.py.  Do not edit directly.
 */

#include "src/init/v8.h"
#include "src/codegen/register.h"
#include "src/execution/frames.h"
#include "src/execution/frames-inl.h" /* for architecture-specific frame constants */
#include "src/objects/contexts.h"
#include "src/objects/objects.h"
#include "src/objects/data-handler.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"

namespace v8 {
namespace internal {

extern "C" {

/* stack frame constants */
#define FRAME_CONST(value, klass)           V8_EXPORT int v8dbg_frametype_##klass = StackFrame::value;

STACK_FRAME_TYPE_LIST(FRAME_CONST)

#undef FRAME_CONST

/* miscellaneous constants */
V8_EXPORT int v8dbg_TaggedSize = kTaggedSize;
V8_EXPORT int v8dbg_off_fp_args = StandardFrameConstants::kFixedFrameSizeAboveFp;
V8_EXPORT int v8dbg_prop_location_shift = PropertyDetails::LocationField::kShift;
V8_EXPORT int v8dbg_IsNotStringMask = kIsNotStringMask;
V8_EXPORT int v8dbg_prop_representation_double = Representation::Kind::kDouble;
V8_EXPORT int v8dbg_prop_attributes_shift = PropertyDetails::AttributesField::kShift;
V8_EXPORT int v8dbg_jsarray_buffer_was_detached_mask = JSArrayBuffer::WasDetachedBit::kMask;
V8_EXPORT int v8dbg_SmiValueShift = kSmiTagSize;
V8_EXPORT int v8dbg_bit_field2_elements_kind_mask = Map::Bits2::ElementsKindBits::kMask;
V8_EXPORT int v8dbg_CodeKindFieldMask = Code::KindField::kMask;
V8_EXPORT int v8dbg_TwoByteStringTag = kTwoByteStringTag;
V8_EXPORT int v8dbg_context_min_slots = Context::MIN_CONTEXT_SLOTS;
V8_EXPORT int v8dbg_SystemPointerSize = kSystemPointerSize;
V8_EXPORT int v8dbg_prop_attributes_NONE = NONE;
V8_EXPORT int v8dbg_prop_kind_Data = static_cast<int>(PropertyKind::kData);
V8_EXPORT int v8dbg_off_fp_context_or_frame_type = CommonFrameConstants::kContextOrFrameTypeOffset;
V8_EXPORT int v8dbg_prop_location_Descriptor = static_cast<int>(PropertyLocation::kDescriptor);
V8_EXPORT int v8dbg_JSFunctionRegister = kJSFunctionRegister.code();
V8_EXPORT int v8dbg_bit_field3_is_dictionary_map_shift = Map::Bits3::IsDictionaryMapBit::kShift;
V8_EXPORT int v8dbg_FirstNonstringType = FIRST_NONSTRING_TYPE;
V8_EXPORT int v8dbg_StringEncodingMask = kStringEncodingMask;
V8_EXPORT int v8dbg_ConsStringTag = kConsStringTag;
V8_EXPORT int v8dbg_elements_fast_elements = PACKED_ELEMENTS;
V8_EXPORT int v8dbg_SlicedStringTag = kSlicedStringTag;
V8_EXPORT int v8dbg_bit_field3_number_of_own_descriptors_mask = Map::Bits3::NumberOfOwnDescriptorsBits::kMask;
V8_EXPORT int v8dbg_numberdictionaryshape_prefix_size = NumberDictionaryShape::kPrefixSize;
V8_EXPORT int v8dbg_FirstContextType = FIRST_CONTEXT_TYPE;
V8_EXPORT int v8dbg_native_context_embedder_data_offset = Internals::kNativeContextEmbedderDataOffset;
V8_EXPORT int v8dbg_prop_desc_key = DescriptorArray::kEntryKeyIndex;
V8_EXPORT int v8dbg_scopeinfo_idx_ncontextlocals = ScopeInfo::kContextLocalCount;
V8_EXPORT int v8dbg_LastContextType = LAST_CONTEXT_TYPE;
V8_EXPORT int v8dbg_HeapObjectTag = kHeapObjectTag;
V8_EXPORT int v8dbg_prop_attributes_mask = PropertyDetails::AttributesField::kMask;
V8_EXPORT int v8dbg_prop_representation_heapobject = Representation::Kind::kHeapObject;
V8_EXPORT int v8dbg_SeqStringTag = kSeqStringTag;
V8_EXPORT int v8dbg_class_Map__instance_descriptors_offset = Map::kInstanceDescriptorsOffset;
V8_EXPORT int v8dbg_SmiShiftSize = kSmiShiftSize;
V8_EXPORT int v8dbg_APIObjectType = JS_API_OBJECT_TYPE;
V8_EXPORT int v8dbg_prop_representation_shift = PropertyDetails::RepresentationField::kShift;
V8_EXPORT int v8dbg_RuntimeCallFunctionRegister = kRuntimeCallFunctionRegister.code();
V8_EXPORT int v8dbg_prop_representation_tagged = Representation::Kind::kTagged;
V8_EXPORT int v8dbg_prop_attributes_DONT_DELETE = DONT_DELETE;
V8_EXPORT int v8dbg_namedictionaryshape_entry_size = NameDictionaryShape::kEntrySize;
V8_EXPORT int v8dbg_scopeinfo_idx_nparams = ScopeInfo::kParameterCount;
V8_EXPORT int v8dbg_prop_location_mask = PropertyDetails::LocationField::kMask;
V8_EXPORT int v8dbg_numberdictionaryshape_entry_size = NumberDictionaryShape::kEntrySize;
V8_EXPORT int v8dbg_TaggedSizeLog2 = kTaggedSizeLog2;
V8_EXPORT int v8dbg_OddballUndefined = Oddball::kUndefined;
V8_EXPORT int v8dbg_InterpreterBytecodeOffsetRegister = kInterpreterBytecodeOffsetRegister.code();
V8_EXPORT int v8dbg_SmiTagMask = kSmiTagMask;
V8_EXPORT int v8dbg_globaldictionaryshape_entry_size = GlobalDictionaryShape::kEntrySize;
V8_EXPORT int v8dbg_simplenumberdictionaryshape_prefix_size = SimpleNumberDictionaryShape::kPrefixSize;
V8_EXPORT int v8dbg_StringRepresentationMask = kStringRepresentationMask;
V8_EXPORT int v8dbg_CodeKindBaseline = static_cast<int>(CodeKind::BASELINE);
V8_EXPORT int v8dbg_OddballTheHole = Oddball::kTheHole;
V8_EXPORT int v8dbg_off_fp_constant_pool = StandardFrameConstants::kConstantPoolOffset;
V8_EXPORT int v8dbg_OddballTrue = Oddball::kTrue;
V8_EXPORT int v8dbg_InterpreterBytecodeArrayRegister = kInterpreterBytecodeArrayRegister.code();
V8_EXPORT int v8dbg_ReturnRegister0 = kReturnRegister0.code();
V8_EXPORT int v8dbg_prop_representation_mask = PropertyDetails::RepresentationField::kMask;
V8_EXPORT int v8dbg_ContextRegister = kContextRegister.code();
V8_EXPORT int v8dbg_prop_kind_mask = PropertyDetails::KindField::kMask;
V8_EXPORT int v8dbg_ExternalStringTag = kExternalStringTag;
V8_EXPORT int v8dbg_StringTag = kStringTag;
V8_EXPORT int v8dbg_OddballOther = Oddball::kOther;
V8_EXPORT int v8dbg_SmiTag = kSmiTag;
V8_EXPORT int v8dbg_context_idx_prev = Context::PREVIOUS_INDEX;
V8_EXPORT int v8dbg_prop_index_shift = PropertyDetails::FieldIndexField::kShift;
V8_EXPORT int v8dbg_off_fp_context = StandardFrameConstants::kContextOffset;
V8_EXPORT int v8dbg_SystemPointerSizeLog2 = kSystemPointerSizeLog2;
V8_EXPORT int v8dbg_prop_representation_smi = Representation::Kind::kSmi;
V8_EXPORT int v8dbg_namedictionaryshape_prefix_size = NameDictionaryShape::kPrefixSize;
V8_EXPORT int v8dbg_CodeKindInterpretedFunction = static_cast<int>(CodeKind::INTERPRETED_FUNCTION);
V8_EXPORT int v8dbg_prop_desc_details = DescriptorArray::kEntryDetailsIndex;
V8_EXPORT int v8dbg_OddballException = Oddball::kException;
V8_EXPORT int v8dbg_prop_desc_size = DescriptorArray::kEntrySize;
V8_EXPORT int v8dbg_type_JSError__JS_ERROR_TYPE = JS_ERROR_TYPE;
V8_EXPORT int v8dbg_scopeinfo_idx_first_vars = ScopeInfo::kVariablePartIndex;
V8_EXPORT int v8dbg_OddballNull = Oddball::kNull;
V8_EXPORT int v8dbg_namedictionary_prefix_start_index = NameDictionary::kPrefixStartIndex;
V8_EXPORT int v8dbg_prop_kind_Accessor = static_cast<int>(PropertyKind::kAccessor);
V8_EXPORT int v8dbg_off_fp_bytecode_offset = UnoptimizedFrameConstants::kBytecodeOffsetOrFeedbackVectorFromFp;
V8_EXPORT int v8dbg_prop_attributes_DONT_ENUM = DONT_ENUM;
V8_EXPORT int v8dbg_prop_index_mask = PropertyDetails::FieldIndexField::kMask;
V8_EXPORT int v8dbg_SpecialAPIObjectType = JS_SPECIAL_API_OBJECT_TYPE;
V8_EXPORT int v8dbg_jsarray_buffer_was_detached_shift = JSArrayBuffer::WasDetachedBit::kShift;
V8_EXPORT int v8dbg_OddballArgumentsMarker = Oddball::kArgumentsMarker;
V8_EXPORT int v8dbg_OddballFalse = Oddball::kFalse;
V8_EXPORT int v8dbg_elements_fast_holey_elements = HOLEY_ELEMENTS;
V8_EXPORT int v8dbg_CodeKindFieldShift = Code::KindField::kShift;
V8_EXPORT int v8dbg_simplenumberdictionaryshape_entry_size = SimpleNumberDictionaryShape::kEntrySize;
V8_EXPORT int v8dbg_bit_field3_number_of_own_descriptors_shift = Map::Bits3::NumberOfOwnDescriptorsBits::kShift;
V8_EXPORT int v8dbg_OneByteStringTag = kOneByteStringTag;
V8_EXPORT int v8dbg_context_idx_scope_info = Context::SCOPE_INFO_INDEX;
V8_EXPORT int v8dbg_off_fp_bytecode_array = UnoptimizedFrameConstants::kBytecodeArrayFromFp;
V8_EXPORT int v8dbg_HeapObjectTagMask = kHeapObjectTagMask;
V8_EXPORT int v8dbg_OddballUninitialized = Oddball::kUninitialized;
V8_EXPORT int v8dbg_off_fp_function = StandardFrameConstants::kFunctionOffset;
V8_EXPORT int v8dbg_prop_attributes_READ_ONLY = READ_ONLY;
V8_EXPORT int v8dbg_elements_dictionary_elements = DICTIONARY_ELEMENTS;
V8_EXPORT int v8dbg_bit_field2_elements_kind_shift = Map::Bits2::ElementsKindBits::kShift;
V8_EXPORT int v8dbg_CodeKindBytecodeHandler = static_cast<int>(CodeKind::BYTECODE_HANDLER);
V8_EXPORT int v8dbg_prop_desc_value = DescriptorArray::kEntryValueIndex;
V8_EXPORT int v8dbg_ThinStringTag = kThinStringTag;
V8_EXPORT int v8dbg_prop_location_Field = static_cast<int>(PropertyLocation::kField);

/* class type information */
V8_EXPORT int v8dbg_type_PropertyCell__PROPERTY_CELL_TYPE = PROPERTY_CELL_TYPE;
V8_EXPORT int v8dbg_type_SmiBox__SMI_BOX_TYPE = SMI_BOX_TYPE;
V8_EXPORT int v8dbg_type_SyntheticModule__SYNTHETIC_MODULE_TYPE = SYNTHETIC_MODULE_TYPE;
V8_EXPORT int v8dbg_type_JSArgumentsObject__JS_ARGUMENTS_OBJECT_TYPE = JS_ARGUMENTS_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_AllocationMemento__ALLOCATION_MEMENTO_TYPE = ALLOCATION_MEMENTO_TYPE;
V8_EXPORT int v8dbg_type_ObjectTemplateInfo__OBJECT_TEMPLATE_INFO_TYPE = OBJECT_TEMPLATE_INFO_TYPE;
V8_EXPORT int v8dbg_type_JSMap__JS_MAP_TYPE = JS_MAP_TYPE;
V8_EXPORT int v8dbg_type_JSAsyncFromSyncIterator__JS_ASYNC_FROM_SYNC_ITERATOR_TYPE = JS_ASYNC_FROM_SYNC_ITERATOR_TYPE;
V8_EXPORT int v8dbg_type_SeqOneByteString__ONE_BYTE_STRING_TYPE = ONE_BYTE_STRING_TYPE;
V8_EXPORT int v8dbg_type_Oddball__ODDBALL_TYPE = ODDBALL_TYPE;
V8_EXPORT int v8dbg_type_CachedTemplateObject__CACHED_TEMPLATE_OBJECT_TYPE = CACHED_TEMPLATE_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_JSDataView__JS_DATA_VIEW_TYPE = JS_DATA_VIEW_TYPE;
V8_EXPORT int v8dbg_type_SortState__SORT_STATE_TYPE = SORT_STATE_TYPE;
V8_EXPORT int v8dbg_type_AbstractInternalClassSubclass2__ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE = ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE;
V8_EXPORT int v8dbg_type_SlicedString__SLICED_STRING_TYPE = SLICED_STRING_TYPE;
V8_EXPORT int v8dbg_type_PromiseRejectReactionJobTask__PROMISE_REJECT_REACTION_JOB_TASK_TYPE = PROMISE_REJECT_REACTION_JOB_TASK_TYPE;
V8_EXPORT int v8dbg_type_DebugInfo__DEBUG_INFO_TYPE = DEBUG_INFO_TYPE;
V8_EXPORT int v8dbg_type_HeapNumber__HEAP_NUMBER_TYPE = HEAP_NUMBER_TYPE;
V8_EXPORT int v8dbg_type_JSProxy__JS_PROXY_TYPE = JS_PROXY_TYPE;
V8_EXPORT int v8dbg_type_TurbofanOtherNumberConstantType__TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE = TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE;
V8_EXPORT int v8dbg_type_SeqTwoByteString__STRING_TYPE = STRING_TYPE;
V8_EXPORT int v8dbg_type_AllocationSite__ALLOCATION_SITE_TYPE = ALLOCATION_SITE_TYPE;
V8_EXPORT int v8dbg_type_ExportedSubClass2__EXPORTED_SUB_CLASS2_TYPE = EXPORTED_SUB_CLASS2_TYPE;
V8_EXPORT int v8dbg_type_InterpreterData__INTERPRETER_DATA_TYPE = INTERPRETER_DATA_TYPE;
V8_EXPORT int v8dbg_type_TurbofanRangeType__TURBOFAN_RANGE_TYPE_TYPE = TURBOFAN_RANGE_TYPE_TYPE;
V8_EXPORT int v8dbg_type_AccessCheckInfo__ACCESS_CHECK_INFO_TYPE = ACCESS_CHECK_INFO_TYPE;
V8_EXPORT int v8dbg_type_JSMessageObject__JS_MESSAGE_OBJECT_TYPE = JS_MESSAGE_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_StrongDescriptorArray__STRONG_DESCRIPTOR_ARRAY_TYPE = STRONG_DESCRIPTOR_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_OnHeapBasicBlockProfilerData__ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE = ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE;
V8_EXPORT int v8dbg_type_CallableTask__CALLABLE_TASK_TYPE = CALLABLE_TASK_TYPE;
V8_EXPORT int v8dbg_type_JSWeakRef__JS_WEAK_REF_TYPE = JS_WEAK_REF_TYPE;
V8_EXPORT int v8dbg_type_CallSiteInfo__CALL_SITE_INFO_TYPE = CALL_SITE_INFO_TYPE;
V8_EXPORT int v8dbg_type_JSArray__JS_ARRAY_TYPE = JS_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_TurbofanHeapConstantType__TURBOFAN_HEAP_CONSTANT_TYPE_TYPE = TURBOFAN_HEAP_CONSTANT_TYPE_TYPE;
V8_EXPORT int v8dbg_type_JSFunction__JS_FUNCTION_TYPE = JS_FUNCTION_TYPE;
V8_EXPORT int v8dbg_type_EmbedderDataArray__EMBEDDER_DATA_ARRAY_TYPE = EMBEDDER_DATA_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_WasmOnFulfilledData__WASM_ON_FULFILLED_DATA_TYPE = WASM_ON_FULFILLED_DATA_TYPE;
V8_EXPORT int v8dbg_type_InterceptorInfo__INTERCEPTOR_INFO_TYPE = INTERCEPTOR_INFO_TYPE;
V8_EXPORT int v8dbg_type_EnumCache__ENUM_CACHE_TYPE = ENUM_CACHE_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalPlainMonthDay__JS_TEMPORAL_PLAIN_MONTH_DAY_TYPE = JS_TEMPORAL_PLAIN_MONTH_DAY_TYPE;
V8_EXPORT int v8dbg_type_UncompiledDataWithoutPreparseData__UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE = UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE;
V8_EXPORT int v8dbg_type_WasmMemoryObject__WASM_MEMORY_OBJECT_TYPE = WASM_MEMORY_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_JSStringIterator__JS_STRING_ITERATOR_TYPE = JS_STRING_ITERATOR_TYPE;
V8_EXPORT int v8dbg_type_JSWeakMap__JS_WEAK_MAP_TYPE = JS_WEAK_MAP_TYPE;
V8_EXPORT int v8dbg_type_FunctionTemplateRareData__FUNCTION_TEMPLATE_RARE_DATA_TYPE = FUNCTION_TEMPLATE_RARE_DATA_TYPE;
V8_EXPORT int v8dbg_type_Script__SCRIPT_TYPE = SCRIPT_TYPE;
V8_EXPORT int v8dbg_type_FunctionTemplateInfo__FUNCTION_TEMPLATE_INFO_TYPE = FUNCTION_TEMPLATE_INFO_TYPE;
V8_EXPORT int v8dbg_type_PropertyArray__PROPERTY_ARRAY_TYPE = PROPERTY_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_PromiseReaction__PROMISE_REACTION_TYPE = PROMISE_REACTION_TYPE;
V8_EXPORT int v8dbg_type_FixedDoubleArray__FIXED_DOUBLE_ARRAY_TYPE = FIXED_DOUBLE_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_JSGlobalObject__JS_GLOBAL_OBJECT_TYPE = JS_GLOBAL_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_BreakPointInfo__BREAK_POINT_INFO_TYPE = BREAK_POINT_INFO_TYPE;
V8_EXPORT int v8dbg_type_PrototypeInfo__PROTOTYPE_INFO_TYPE = PROTOTYPE_INFO_TYPE;
V8_EXPORT int v8dbg_type_WasmJSFunctionData__WASM_JS_FUNCTION_DATA_TYPE = WASM_JS_FUNCTION_DATA_TYPE;
V8_EXPORT int v8dbg_type_Cell__CELL_TYPE = CELL_TYPE;
V8_EXPORT int v8dbg_type_SourceTextModule__SOURCE_TEXT_MODULE_TYPE = SOURCE_TEXT_MODULE_TYPE;
V8_EXPORT int v8dbg_type_TemplateObjectDescription__TEMPLATE_OBJECT_DESCRIPTION_TYPE = TEMPLATE_OBJECT_DESCRIPTION_TYPE;
V8_EXPORT int v8dbg_type_StackFrameInfo__STACK_FRAME_INFO_TYPE = STACK_FRAME_INFO_TYPE;
V8_EXPORT int v8dbg_type_WasmIndirectFunctionTable__WASM_INDIRECT_FUNCTION_TABLE_TYPE = WASM_INDIRECT_FUNCTION_TABLE_TYPE;
V8_EXPORT int v8dbg_type_SlicedString__SLICED_ONE_BYTE_STRING_TYPE = SLICED_ONE_BYTE_STRING_TYPE;
V8_EXPORT int v8dbg_type_WasmTagObject__WASM_TAG_OBJECT_TYPE = WASM_TAG_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_TurbofanBitsetType__TURBOFAN_BITSET_TYPE_TYPE = TURBOFAN_BITSET_TYPE_TYPE;
V8_EXPORT int v8dbg_type_JSTypedArray__JS_TYPED_ARRAY_TYPE = JS_TYPED_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_JSExternalObject__JS_EXTERNAL_OBJECT_TYPE = JS_EXTERNAL_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_ScopeInfo__SCOPE_INFO_TYPE = SCOPE_INFO_TYPE;
V8_EXPORT int v8dbg_type_Symbol__SYMBOL_TYPE = SYMBOL_TYPE;
V8_EXPORT int v8dbg_type_FreeSpace__FREE_SPACE_TYPE = FREE_SPACE_TYPE;
V8_EXPORT int v8dbg_type_Code__CODE_TYPE = CODE_TYPE;
V8_EXPORT int v8dbg_type_ConsString__CONS_STRING_TYPE = CONS_STRING_TYPE;
V8_EXPORT int v8dbg_type_ClassPositions__CLASS_POSITIONS_TYPE = CLASS_POSITIONS_TYPE;
V8_EXPORT int v8dbg_type_JSDate__JS_DATE_TYPE = JS_DATE_TYPE;
V8_EXPORT int v8dbg_type_CoverageInfo__COVERAGE_INFO_TYPE = COVERAGE_INFO_TYPE;
V8_EXPORT int v8dbg_type_PromiseFulfillReactionJobTask__PROMISE_FULFILL_REACTION_JOB_TASK_TYPE = PROMISE_FULFILL_REACTION_JOB_TASK_TYPE;
V8_EXPORT int v8dbg_type_WasmExceptionTag__WASM_EXCEPTION_TAG_TYPE = WASM_EXCEPTION_TAG_TYPE;
V8_EXPORT int v8dbg_type_WeakCell__WEAK_CELL_TYPE = WEAK_CELL_TYPE;
V8_EXPORT int v8dbg_type_CallbackTask__CALLBACK_TASK_TYPE = CALLBACK_TASK_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalPlainDateTime__JS_TEMPORAL_PLAIN_DATE_TIME_TYPE = JS_TEMPORAL_PLAIN_DATE_TIME_TYPE;
V8_EXPORT int v8dbg_type_ScriptOrModule__SCRIPT_OR_MODULE_TYPE = SCRIPT_OR_MODULE_TYPE;
V8_EXPORT int v8dbg_type_WasmArray__WASM_ARRAY_TYPE = WASM_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_WasmTypeInfo__WASM_TYPE_INFO_TYPE = WASM_TYPE_INFO_TYPE;
V8_EXPORT int v8dbg_type_SwissNameDictionary__SWISS_NAME_DICTIONARY_TYPE = SWISS_NAME_DICTIONARY_TYPE;
V8_EXPORT int v8dbg_type_JSPromise__JS_PROMISE_TYPE = JS_PROMISE_TYPE;
V8_EXPORT int v8dbg_type_WasmSuspenderObject__WASM_SUSPENDER_OBJECT_TYPE = WASM_SUSPENDER_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_JSWrappedFunction__JS_WRAPPED_FUNCTION_TYPE = JS_WRAPPED_FUNCTION_TYPE;
V8_EXPORT int v8dbg_type_ExternalTwoByteString__EXTERNAL_STRING_TYPE = EXTERNAL_STRING_TYPE;
V8_EXPORT int v8dbg_type_ErrorStackData__ERROR_STACK_DATA_TYPE = ERROR_STACK_DATA_TYPE;
V8_EXPORT int v8dbg_type_RegExpBoilerplateDescription__REG_EXP_BOILERPLATE_DESCRIPTION_TYPE = REG_EXP_BOILERPLATE_DESCRIPTION_TYPE;
V8_EXPORT int v8dbg_type_ConsString__CONS_ONE_BYTE_STRING_TYPE = CONS_ONE_BYTE_STRING_TYPE;
V8_EXPORT int v8dbg_type_JSShadowRealm__JS_SHADOW_REALM_TYPE = JS_SHADOW_REALM_TYPE;
V8_EXPORT int v8dbg_type_WasmApiFunctionRef__WASM_API_FUNCTION_REF_TYPE = WASM_API_FUNCTION_REF_TYPE;
V8_EXPORT int v8dbg_type_JSFinalizationRegistry__JS_FINALIZATION_REGISTRY_TYPE = JS_FINALIZATION_REGISTRY_TYPE;
V8_EXPORT int v8dbg_type_ExternalOneByteString__EXTERNAL_ONE_BYTE_STRING_TYPE = EXTERNAL_ONE_BYTE_STRING_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalPlainDate__JS_TEMPORAL_PLAIN_DATE_TYPE = JS_TEMPORAL_PLAIN_DATE_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalTimeZone__JS_TEMPORAL_TIME_ZONE_TYPE = JS_TEMPORAL_TIME_ZONE_TYPE;
V8_EXPORT int v8dbg_type_AccessorInfo__ACCESSOR_INFO_TYPE = ACCESSOR_INFO_TYPE;
V8_EXPORT int v8dbg_type_JSWeakSet__JS_WEAK_SET_TYPE = JS_WEAK_SET_TYPE;
V8_EXPORT int v8dbg_type_UncompiledDataWithPreparseDataAndJob__UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE = UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE;
V8_EXPORT int v8dbg_type_FixedArray__FIXED_ARRAY_TYPE = FIXED_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_PreparseData__PREPARSE_DATA_TYPE = PREPARSE_DATA_TYPE;
V8_EXPORT int v8dbg_type_SmallOrderedHashMap__SMALL_ORDERED_HASH_MAP_TYPE = SMALL_ORDERED_HASH_MAP_TYPE;
V8_EXPORT int v8dbg_type_WeakFixedArray__WEAK_FIXED_ARRAY_TYPE = WEAK_FIXED_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_CodeDataContainer__CODE_DATA_CONTAINER_TYPE = CODE_DATA_CONTAINER_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalInstant__JS_TEMPORAL_INSTANT_TYPE = JS_TEMPORAL_INSTANT_TYPE;
V8_EXPORT int v8dbg_type_PropertyDescriptorObject__PROPERTY_DESCRIPTOR_OBJECT_TYPE = PROPERTY_DESCRIPTOR_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_AsmWasmData__ASM_WASM_DATA_TYPE = ASM_WASM_DATA_TYPE;
V8_EXPORT int v8dbg_type_JSModuleNamespace__JS_MODULE_NAMESPACE_TYPE = JS_MODULE_NAMESPACE_TYPE;
V8_EXPORT int v8dbg_type_ArrayBoilerplateDescription__ARRAY_BOILERPLATE_DESCRIPTION_TYPE = ARRAY_BOILERPLATE_DESCRIPTION_TYPE;
V8_EXPORT int v8dbg_type_PromiseCapability__PROMISE_CAPABILITY_TYPE = PROMISE_CAPABILITY_TYPE;
V8_EXPORT int v8dbg_type_ModuleRequest__MODULE_REQUEST_TYPE = MODULE_REQUEST_TYPE;
V8_EXPORT int v8dbg_type_BreakPoint__BREAK_POINT_TYPE = BREAK_POINT_TYPE;
V8_EXPORT int v8dbg_type_FeedbackVector__FEEDBACK_VECTOR_TYPE = FEEDBACK_VECTOR_TYPE;
V8_EXPORT int v8dbg_type_AccessorPair__ACCESSOR_PAIR_TYPE = ACCESSOR_PAIR_TYPE;
V8_EXPORT int v8dbg_type_BytecodeArray__BYTECODE_ARRAY_TYPE = BYTECODE_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_JSAsyncGeneratorObject__JS_ASYNC_GENERATOR_OBJECT_TYPE = JS_ASYNC_GENERATOR_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalPlainYearMonth__JS_TEMPORAL_PLAIN_YEAR_MONTH_TYPE = JS_TEMPORAL_PLAIN_YEAR_MONTH_TYPE;
V8_EXPORT int v8dbg_type_InternalClassWithStructElements__INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE = INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE;
V8_EXPORT int v8dbg_type_SmiPair__SMI_PAIR_TYPE = SMI_PAIR_TYPE;
V8_EXPORT int v8dbg_type_PromiseOnStack__PROMISE_ON_STACK_TYPE = PROMISE_ON_STACK_TYPE;
V8_EXPORT int v8dbg_type_JSRegExpStringIterator__JS_REG_EXP_STRING_ITERATOR_TYPE = JS_REG_EXP_STRING_ITERATOR_TYPE;
V8_EXPORT int v8dbg_type_ByteArray__BYTE_ARRAY_TYPE = BYTE_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_WasmStruct__WASM_STRUCT_TYPE = WASM_STRUCT_TYPE;
V8_EXPORT int v8dbg_type_JSPrimitiveWrapper__JS_PRIMITIVE_WRAPPER_TYPE = JS_PRIMITIVE_WRAPPER_TYPE;
V8_EXPORT int v8dbg_type_FeedbackCell__FEEDBACK_CELL_TYPE = FEEDBACK_CELL_TYPE;
V8_EXPORT int v8dbg_type_AliasedArgumentsEntry__ALIASED_ARGUMENTS_ENTRY_TYPE = ALIASED_ARGUMENTS_ENTRY_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalZonedDateTime__JS_TEMPORAL_ZONED_DATE_TIME_TYPE = JS_TEMPORAL_ZONED_DATE_TIME_TYPE;
V8_EXPORT int v8dbg_type_JSArrayBuffer__JS_ARRAY_BUFFER_TYPE = JS_ARRAY_BUFFER_TYPE;
V8_EXPORT int v8dbg_type_ExportedSubClass__EXPORTED_SUB_CLASS_TYPE = EXPORTED_SUB_CLASS_TYPE;
V8_EXPORT int v8dbg_type_SmallOrderedNameDictionary__SMALL_ORDERED_NAME_DICTIONARY_TYPE = SMALL_ORDERED_NAME_DICTIONARY_TYPE;
V8_EXPORT int v8dbg_type_InternalClassWithSmiElements__INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE = INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE;
V8_EXPORT int v8dbg_type_DescriptorArray__DESCRIPTOR_ARRAY_TYPE = DESCRIPTOR_ARRAY_TYPE;
V8_EXPORT int v8dbg_type_WeakArrayList__WEAK_ARRAY_LIST_TYPE = WEAK_ARRAY_LIST_TYPE;
V8_EXPORT int v8dbg_type_WasmInternalFunction__WASM_INTERNAL_FUNCTION_TYPE = WASM_INTERNAL_FUNCTION_TYPE;
V8_EXPORT int v8dbg_type_JSAsyncFunctionObject__JS_ASYNC_FUNCTION_OBJECT_TYPE = JS_ASYNC_FUNCTION_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_AbstractInternalClassSubclass1__ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE = ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE;
V8_EXPORT int v8dbg_type_JSArrayIterator__JS_ARRAY_ITERATOR_TYPE = JS_ARRAY_ITERATOR_TYPE;
V8_EXPORT int v8dbg_type_UncompiledDataWithPreparseData__UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE = UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE;
V8_EXPORT int v8dbg_type_JSObject__JS_OBJECT_TYPE = JS_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_CallHandlerInfo__CALL_HANDLER_INFO_TYPE = CALL_HANDLER_INFO_TYPE;
V8_EXPORT int v8dbg_type_SloppyArgumentsElements__SLOPPY_ARGUMENTS_ELEMENTS_TYPE = SLOPPY_ARGUMENTS_ELEMENTS_TYPE;
V8_EXPORT int v8dbg_type_JSSharedStruct__JS_SHARED_STRUCT_TYPE = JS_SHARED_STRUCT_TYPE;
V8_EXPORT int v8dbg_type_WasmCapiFunctionData__WASM_CAPI_FUNCTION_DATA_TYPE = WASM_CAPI_FUNCTION_DATA_TYPE;
V8_EXPORT int v8dbg_type_AsyncGeneratorRequest__ASYNC_GENERATOR_REQUEST_TYPE = ASYNC_GENERATOR_REQUEST_TYPE;
V8_EXPORT int v8dbg_type_WasmModuleObject__WASM_MODULE_OBJECT_TYPE = WASM_MODULE_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_UncompiledDataWithoutPreparseDataWithJob__UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE = UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalPlainTime__JS_TEMPORAL_PLAIN_TIME_TYPE = JS_TEMPORAL_PLAIN_TIME_TYPE;
V8_EXPORT int v8dbg_type_PromiseResolveThenableJobTask__PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE = PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE;
V8_EXPORT int v8dbg_type_JSGlobalProxy__JS_GLOBAL_PROXY_TYPE = JS_GLOBAL_PROXY_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalDuration__JS_TEMPORAL_DURATION_TYPE = JS_TEMPORAL_DURATION_TYPE;
V8_EXPORT int v8dbg_type_Tuple2__TUPLE2_TYPE = TUPLE2_TYPE;
V8_EXPORT int v8dbg_type_JSRegExp__JS_REG_EXP_TYPE = JS_REG_EXP_TYPE;
V8_EXPORT int v8dbg_type_WasmGlobalObject__WASM_GLOBAL_OBJECT_TYPE = WASM_GLOBAL_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_JSSet__JS_SET_TYPE = JS_SET_TYPE;
V8_EXPORT int v8dbg_type_SharedFunctionInfo__SHARED_FUNCTION_INFO_TYPE = SHARED_FUNCTION_INFO_TYPE;
V8_EXPORT int v8dbg_type_SourceTextModuleInfoEntry__SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE = SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE;
V8_EXPORT int v8dbg_type_MegaDomHandler__MEGA_DOM_HANDLER_TYPE = MEGA_DOM_HANDLER_TYPE;
V8_EXPORT int v8dbg_type_InternalizedString__ONE_BYTE_INTERNALIZED_STRING_TYPE = ONE_BYTE_INTERNALIZED_STRING_TYPE;
V8_EXPORT int v8dbg_type_JSBoundFunction__JS_BOUND_FUNCTION_TYPE = JS_BOUND_FUNCTION_TYPE;
V8_EXPORT int v8dbg_type_SmallOrderedHashSet__SMALL_ORDERED_HASH_SET_TYPE = SMALL_ORDERED_HASH_SET_TYPE;
V8_EXPORT int v8dbg_type_WasmTableObject__WASM_TABLE_OBJECT_TYPE = WASM_TABLE_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_WasmExportedFunctionData__WASM_EXPORTED_FUNCTION_DATA_TYPE = WASM_EXPORTED_FUNCTION_DATA_TYPE;
V8_EXPORT int v8dbg_type_InternalClass__INTERNAL_CLASS_TYPE = INTERNAL_CLASS_TYPE;
V8_EXPORT int v8dbg_type_JSTemporalCalendar__JS_TEMPORAL_CALENDAR_TYPE = JS_TEMPORAL_CALENDAR_TYPE;
V8_EXPORT int v8dbg_type_Map__MAP_TYPE = MAP_TYPE;
V8_EXPORT int v8dbg_type_WasmContinuationObject__WASM_CONTINUATION_OBJECT_TYPE = WASM_CONTINUATION_OBJECT_TYPE;
V8_EXPORT int v8dbg_type_TurbofanUnionType__TURBOFAN_UNION_TYPE_TYPE = TURBOFAN_UNION_TYPE_TYPE;

/* class hierarchy information */
V8_EXPORT int v8dbg_parent_ExternalTwoByteString__ExternalString = 0;
V8_EXPORT int v8dbg_parent_JSFunctionOrBoundFunctionOrWrappedFunction__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSReceiver__HeapObject = 0;
V8_EXPORT int v8dbg_parent_ThinString__String = 0;
V8_EXPORT int v8dbg_parent_UncompiledDataWithPreparseDataAndJob__UncompiledDataWithPreparseData = 0;
V8_EXPORT int v8dbg_parent_DeoptimizationLiteralArray__WeakFixedArray = 0;
V8_EXPORT int v8dbg_parent_AccessorPair__Struct = 0;
V8_EXPORT int v8dbg_parent_AllocationSite__Struct = 0;
V8_EXPORT int v8dbg_parent_JSDataPropertyDescriptor__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSAccessorPropertyDescriptor__JSObject = 0;
V8_EXPORT int v8dbg_parent_Map__HeapObject = 0;
V8_EXPORT int v8dbg_parent_SlicedString__String = 0;
V8_EXPORT int v8dbg_parent_FeedbackCell__Struct = 0;
V8_EXPORT int v8dbg_parent_Name__PrimitiveHeapObject = 0;
V8_EXPORT int v8dbg_parent_ExternalOneByteString__ExternalString = 0;
V8_EXPORT int v8dbg_parent_WeakArrayList__HeapObject = 0;
V8_EXPORT int v8dbg_parent_InterpreterData__Struct = 0;
V8_EXPORT int v8dbg_parent_SeqTwoByteString__SeqString = 0;
V8_EXPORT int v8dbg_parent_JSFunction__JSFunctionOrBoundFunctionOrWrappedFunction = 0;
V8_EXPORT int v8dbg_parent_HeapObject__Object = 0;
V8_EXPORT int v8dbg_parent_JSBoundFunction__JSFunctionOrBoundFunctionOrWrappedFunction = 0;
V8_EXPORT int v8dbg_parent_JSSpecialObject__JSCustomElementsObject = 0;
V8_EXPORT int v8dbg_parent_JSArrayBuffer__JSObjectWithEmbedderSlots = 0;
V8_EXPORT int v8dbg_parent_JSGlobalObject__JSSpecialObject = 0;
V8_EXPORT int v8dbg_parent_Script__Struct = 0;
V8_EXPORT int v8dbg_parent_JSArrayIterator__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSDate__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSRegExpResultWithIndices__JSRegExpResult = 0;
V8_EXPORT int v8dbg_parent_UncompiledDataWithoutPreparseData__UncompiledData = 0;
V8_EXPORT int v8dbg_parent_ByteArray__FixedArrayBase = 0;
V8_EXPORT int v8dbg_parent_JSPrimitiveWrapper__JSCustomElementsObject = 0;
V8_EXPORT int v8dbg_parent_JSArray__JSObject = 0;
V8_EXPORT int v8dbg_parent_ConsString__String = 0;
V8_EXPORT int v8dbg_parent_FixedArrayExactfinal__FixedArray = 0;
V8_EXPORT int v8dbg_parent_JSObjectWithEmbedderSlots__JSObject = 0;
V8_EXPORT int v8dbg_parent_SeqOneByteString__SeqString = 0;
V8_EXPORT int v8dbg_parent_HeapNumber__PrimitiveHeapObject = 0;
V8_EXPORT int v8dbg_parent_DependentCode__WeakArrayList = 0;
V8_EXPORT int v8dbg_parent_JSRegExp__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSRegExpResultIndices__JSArray = 0;
V8_EXPORT int v8dbg_parent_JSIteratorResult__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSMessageObject__JSObject = 0;
V8_EXPORT int v8dbg_parent_AllocationMemento__Struct = 0;
V8_EXPORT int v8dbg_parent_UncompiledData__HeapObject = 0;
V8_EXPORT int v8dbg_parent_JSDataView__JSArrayBufferView = 0;
V8_EXPORT int v8dbg_parent_UncompiledDataWithoutPreparseDataWithJob__UncompiledDataWithoutPreparseData = 0;
V8_EXPORT int v8dbg_parent_Struct__HeapObject = 0;
V8_EXPORT int v8dbg_parent_SeqString__String = 0;
V8_EXPORT int v8dbg_parent_JSWrappedFunction__JSFunctionOrBoundFunctionOrWrappedFunction = 0;
V8_EXPORT int v8dbg_parent_DataHandler__Struct = 0;
V8_EXPORT int v8dbg_parent_Tuple2__Struct = 0;
V8_EXPORT int v8dbg_parent_PodArray__ByteArray = 0;
V8_EXPORT int v8dbg_parent_JSRegExpResult__JSArray = 0;
V8_EXPORT int v8dbg_parent_WeakFixedArray__HeapObject = 0;
V8_EXPORT int v8dbg_parent_Code__HeapObject = 0;
V8_EXPORT int v8dbg_parent_JSAsyncFromSyncIterator__JSObject = 0;
V8_EXPORT int v8dbg_parent_ArrayList__FixedArray = 0;
V8_EXPORT int v8dbg_parent_JSPromise__JSObjectWithEmbedderSlots = 0;
V8_EXPORT int v8dbg_parent_ExternalString__String = 0;
V8_EXPORT int v8dbg_parent_InternalizedString__String = 0;
V8_EXPORT int v8dbg_parent_JSArrayBufferView__JSObjectWithEmbedderSlots = 0;
V8_EXPORT int v8dbg_parent_FixedDoubleArray__FixedArrayBase = 0;
V8_EXPORT int v8dbg_parent_FixedArrayBase__HeapObject = 0;
V8_EXPORT int v8dbg_parent_DescriptorArray__HeapObject = 0;
V8_EXPORT int v8dbg_parent_EnumCache__Struct = 0;
V8_EXPORT int v8dbg_parent_JSGlobalProxy__JSSpecialObject = 0;
V8_EXPORT int v8dbg_parent_JSRegExpStringIterator__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSStringIterator__JSObject = 0;
V8_EXPORT int v8dbg_parent_JSExternalObject__JSObject = 0;
V8_EXPORT int v8dbg_parent_Symbol__Name = 0;
V8_EXPORT int v8dbg_parent_ScopeInfo__HeapObject = 0;
V8_EXPORT int v8dbg_parent_NormalizedMapCache__WeakFixedArray = 0;
V8_EXPORT int v8dbg_parent_AbstractCode__HeapObject = 0;
V8_EXPORT int v8dbg_parent_Cell__HeapObject = 0;
V8_EXPORT int v8dbg_parent_JSTypedArray__JSArrayBufferView = 0;
V8_EXPORT int v8dbg_parent_Oddball__PrimitiveHeapObject = 0;
V8_EXPORT int v8dbg_parent_TemplateList__FixedArray = 0;
V8_EXPORT int v8dbg_parent_JSObject__JSReceiver = 0;
V8_EXPORT int v8dbg_parent_BytecodeArray__FixedArrayBase = 0;
V8_EXPORT int v8dbg_parent_Object__TaggedImpl = 0;
V8_EXPORT int v8dbg_parent_PreparseData__HeapObject = 0;
V8_EXPORT int v8dbg_parent_SharedFunctionInfo__HeapObject = 0;
V8_EXPORT int v8dbg_parent_CodeDataContainer__HeapObject = 0;
V8_EXPORT int v8dbg_parent_UncompiledDataWithPreparseData__UncompiledData = 0;
V8_EXPORT int v8dbg_parent_JSCustomElementsObject__JSObject = 0;
V8_EXPORT int v8dbg_parent_PrimitiveHeapObject__HeapObject = 0;
V8_EXPORT int v8dbg_parent_FixedArray__FixedArrayBase = 0;
V8_EXPORT int v8dbg_parent_String__Name = 0;
V8_EXPORT int v8dbg_parent_ClassPositions__Struct = 0;
V8_EXPORT int v8dbg_parent_DeoptimizationData__FixedArray = 0;

/* field information */
V8_EXPORT int v8dbg_class_DescriptorArray__header_size__uintptr_t = DescriptorArray::kHeaderSize;
V8_EXPORT int v8dbg_class_ConsString__second__String = ConsString::kSecondOffset;
V8_EXPORT int v8dbg_class_Oddball__to_number__Object = Oddball::kToNumberOffset;
V8_EXPORT int v8dbg_class_JSTypedArray__length__Object = JSTypedArray::kLengthOffset;
V8_EXPORT int v8dbg_class_AllocationSite__transition_info_or_boilerplate__Object = AllocationSite::kTransitionInfoOrBoilerplateOffset;
V8_EXPORT int v8dbg_class_UncompiledData__inferred_name__String = UncompiledData::kInferredNameOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__raw_function_token_offset__int16_t = SharedFunctionInfo::kFunctionTokenOffsetOffset;
V8_EXPORT int v8dbg_class_Code__instruction_size__int = Code::kInstructionSizeOffset;
V8_EXPORT int v8dbg_class_JSFunction__code__CodeT = JSFunction::kCodeOffset;
V8_EXPORT int v8dbg_class_Code__instruction_start__uintptr_t = Code::kHeaderSize;
V8_EXPORT int v8dbg_class_JSArrayBufferView__byte_length__size_t = JSArrayBufferView::kByteLengthOffset;
V8_EXPORT int v8dbg_class_Script__eval_from_shared_or_wrapped_arguments_or_sfi_table__Object = Script::kEvalFromSharedOrWrappedArgumentsOrSfiTableOffset;
V8_EXPORT int v8dbg_class_JSReceiver__raw_properties_or_hash__Object = JSReceiver::kPropertiesOrHashOffset;
V8_EXPORT int v8dbg_class_Code__flags__uint32_t = Code::kFlagsOffset;
V8_EXPORT int v8dbg_class_Map__bit_field2__char = Map::kBitField2Offset;
V8_EXPORT int v8dbg_class_DataHandler__data1__weak = DataHandler::kData1Offset;
V8_EXPORT int v8dbg_class_Script__line_ends__Object = Script::kLineEndsOffset;
V8_EXPORT int v8dbg_class_JSMessageObject__raw_type__SMI = JSMessageObject::kMessageTypeOffset;
V8_EXPORT int v8dbg_class_FixedArrayBase__length__SMI = FixedArrayBase::kLengthOffset;
V8_EXPORT int v8dbg_class_JSArrayBuffer__byte_length__size_t = JSArrayBuffer::kByteLengthOffset;
V8_EXPORT int v8dbg_class_JSDate__value__Object = JSDate::kValueOffset;
V8_EXPORT int v8dbg_class_Map__native_context__NativeContext = Map::kConstructorOrBackPointerOrNativeContextOffset;
V8_EXPORT int v8dbg_class_JSFunction__prototype_or_initial_map__HeapObject = JSFunction::kPrototypeOrInitialMapOffset;
V8_EXPORT int v8dbg_class_JSMessageObject__shared_info__HeapObject = JSMessageObject::kSharedInfoOffset;
V8_EXPORT int v8dbg_class_AllocationSite__dependent_code__DependentCode = AllocationSite::kDependentCodeOffset;
V8_EXPORT int v8dbg_class_SeqOneByteString__chars__char = SeqOneByteString::kHeaderSize;
V8_EXPORT int v8dbg_class_JSFunction__context__Context = JSFunction::kContextOffset;
V8_EXPORT int v8dbg_class_Map__instance_descriptors__DescriptorArray = Map::kInstanceDescriptorsOffset;
V8_EXPORT int v8dbg_class_SlicedString__offset__SMI = SlicedString::kOffsetOffset;
V8_EXPORT int v8dbg_class_UncompiledData__end_position__int32_t = UncompiledData::kEndPositionOffset;
V8_EXPORT int v8dbg_class_DataHandler__data3__weak = DataHandler::kData3Offset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__function_data__Object = SharedFunctionInfo::kFunctionDataOffset;
V8_EXPORT int v8dbg_class_Map__prototype__HeapObject = Map::kPrototypeOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__script_or_debug_info__HeapObject = SharedFunctionInfo::kScriptOrDebugInfoOffset;
V8_EXPORT int v8dbg_class_Map__inobject_properties_start_or_constructor_function_index__char = Map::kInobjectPropertiesStartOrConstructorFunctionIndexOffset;
V8_EXPORT int v8dbg_class_Oddball__kind_offset__int = Oddball::kKindOffset;
V8_EXPORT int v8dbg_class_Script__source__Object = Script::kSourceOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__name_or_scope_info__Object = SharedFunctionInfo::kNameOrScopeInfoOffset;
V8_EXPORT int v8dbg_class_Map__prototype_validity_cell__Object = Map::kPrototypeValidityCellOffset;
V8_EXPORT int v8dbg_class_FixedArray__data__uintptr_t = FixedArray::kHeaderSize;
V8_EXPORT int v8dbg_class_Map__bit_field__char = Map::kBitFieldOffset;
V8_EXPORT int v8dbg_class_JSObject__internal_fields__uintptr_t = JSObject::kHeaderSize;
V8_EXPORT int v8dbg_class_JSMessageObject__end_position__SMI = JSMessageObject::kEndPositionOffset;
V8_EXPORT int v8dbg_class_Script__wasm_breakpoint_infos__FixedArray = Script::kEvalFromSharedOrWrappedArgumentsOrSfiTableOffset;
V8_EXPORT int v8dbg_class_Map__prototype__Object = Map::kPrototypeOffset;
V8_EXPORT int v8dbg_class_Symbol__name__Object = Symbol::kDescriptionOffset;
V8_EXPORT int v8dbg_class_Map__native_context_or_null__Object = Map::kConstructorOrBackPointerOrNativeContextOffset;
V8_EXPORT int v8dbg_class_Map__instance_type__uint16_t = Map::kInstanceTypeOffset;
V8_EXPORT int v8dbg_class_JSArrayBufferView__byte_offset__size_t = JSArrayBufferView::kByteOffsetOffset;
V8_EXPORT int v8dbg_class_Map__instance_size_in_words__char = Map::kInstanceSizeInWordsOffset;
V8_EXPORT int v8dbg_class_Script__type__SMI = Script::kScriptTypeOffset;
V8_EXPORT int v8dbg_class_AllocationSite__nested_site__Object = AllocationSite::kNestedSiteOffset;
V8_EXPORT int v8dbg_class_JSTypedArray__external_pointer__uintptr_t = JSTypedArray::kExternalPointerOffset;
V8_EXPORT int v8dbg_class_Script__eval_from_position__SMI = Script::kEvalFromPositionOffset;
V8_EXPORT int v8dbg_class_SlicedString__parent__String = SlicedString::kParentOffset;
V8_EXPORT int v8dbg_class_Map__wasm_type_info__WasmTypeInfo = Map::kConstructorOrBackPointerOrNativeContextOffset;
V8_EXPORT int v8dbg_class_Map__dependent_code__DependentCode = Map::kDependentCodeOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__flags__int = SharedFunctionInfo::kFlagsOffset;
V8_EXPORT int v8dbg_class_JSRegExp__source__Object = JSRegExp::kSourceOffset;
V8_EXPORT int v8dbg_class_AccessorPair__getter__Object = AccessorPair::kGetterOffset;
V8_EXPORT int v8dbg_class_JSMessageObject__error_level__SMI = JSMessageObject::kErrorLevelOffset;
V8_EXPORT int v8dbg_class_Map__constructor_or_back_pointer__Object = Map::kConstructorOrBackPointerOrNativeContextOffset;
V8_EXPORT int v8dbg_class_JSGlobalObject__global_dictionary__GlobalDictionary = JSGlobalObject::kPropertiesOrHashOffset;
V8_EXPORT int v8dbg_class_Oddball__type_of__String = Oddball::kTypeOfOffset;
V8_EXPORT int v8dbg_class_UncompiledData__start_position__int32_t = UncompiledData::kStartPositionOffset;
V8_EXPORT int v8dbg_class_HeapObject__map__Map = HeapObject::kMapOffset;
V8_EXPORT int v8dbg_class_ExternalString__resource__Object = ExternalString::kResourceOffset;
V8_EXPORT int v8dbg_class_JSArrayIterator__raw_kind__SMI = JSArrayIterator::kKindOffset;
V8_EXPORT int v8dbg_class_JSFunction__raw_feedback_cell__FeedbackCell = JSFunction::kFeedbackCellOffset;
V8_EXPORT int v8dbg_class_JSIteratorResult__done__Object = JSIteratorResult::kDoneOffset;
V8_EXPORT int v8dbg_class_HeapNumber__value__double = HeapNumber::kValueOffset;
V8_EXPORT int v8dbg_class_Map__bit_field3__int = Map::kBitField3Offset;
V8_EXPORT int v8dbg_class_JSFunction__shared__SharedFunctionInfo = JSFunction::kSharedFunctionInfoOffset;
V8_EXPORT int v8dbg_class_AccessorPair__setter__Object = AccessorPair::kSetterOffset;
V8_EXPORT int v8dbg_class_CodeDataContainer__next_code_link__Object = CodeDataContainer::kNextCodeLinkOffset;
V8_EXPORT int v8dbg_class_JSArrayBuffer__backing_store__uintptr_t = JSArrayBuffer::kBackingStoreOffset;
V8_EXPORT int v8dbg_class_JSMessageObject__start_position__SMI = JSMessageObject::kStartPositionOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__feedback_metadata__FeedbackMetadata = SharedFunctionInfo::kOuterScopeInfoOrFeedbackMetadataOffset;
V8_EXPORT int v8dbg_class_DataHandler__data2__weak = DataHandler::kData2Offset;
V8_EXPORT int v8dbg_class_JSObject__elements__Object = JSObject::kElementsOffset;
V8_EXPORT int v8dbg_class_JSRegExp__last_index__Object = JSRegExp::kLastIndexOffset;
V8_EXPORT int v8dbg_class_Script__wasm_managed_native_module__Object = Script::kEvalFromPositionOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__length__uint16_t = SharedFunctionInfo::kLengthOffset;
V8_EXPORT int v8dbg_class_Script__wasm_weak_instance_list__WeakArrayList = Script::kSharedFunctionInfosOffset;
V8_EXPORT int v8dbg_class_BytecodeArray__data__uintptr_t = BytecodeArray::kHeaderSize;
V8_EXPORT int v8dbg_class_JSMessageObject__bytecode_offset__Smi = JSMessageObject::kBytecodeOffsetOffset;
V8_EXPORT int v8dbg_class_String__length__int32_t = String::kLengthOffset;
V8_EXPORT int v8dbg_class_JSTypedArray__base_pointer__Object = JSTypedArray::kBasePointerOffset;
V8_EXPORT int v8dbg_class_AllocationMemento__allocation_site__Object = AllocationMemento::kAllocationSiteOffset;
V8_EXPORT int v8dbg_class_SharedFunctionInfo__internal_formal_parameter_count__uint16_t = SharedFunctionInfo::kFormalParameterCountOffset;
V8_EXPORT int v8dbg_class_FeedbackCell__value__HeapObject = FeedbackCell::kValueOffset;
V8_EXPORT int v8dbg_class_Script__name__Object = Script::kNameOffset;
V8_EXPORT int v8dbg_class_Oddball__to_string__String = Oddball::kToStringOffset;
V8_EXPORT int v8dbg_class_Map__prototype_info__Object = Map::kTransitionsOrPrototypeInfoOffset;
V8_EXPORT int v8dbg_class_ConsString__first__String = ConsString::kFirstOffset;
V8_EXPORT int v8dbg_class_JSIteratorResult__value__Object = JSIteratorResult::kValueOffset;
V8_EXPORT int v8dbg_class_AllocationSite__weak_next__Object = AllocationSite::kWeakNextOffset;
V8_EXPORT int v8dbg_class_ThinString__actual__String = ThinString::kActualOffset;
V8_EXPORT int v8dbg_class_SeqTwoByteString__chars__char = SeqTwoByteString::kHeaderSize;
V8_EXPORT int v8dbg_class_Map__raw_transitions__weak = Map::kTransitionsOrPrototypeInfoOffset;


}

}
}