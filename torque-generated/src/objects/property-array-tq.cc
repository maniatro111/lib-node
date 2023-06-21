#include "src/objects/property-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
bool IsPropertyArray_NonInline(HeapObject o) {
  return o.IsPropertyArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPropertyArray<PropertyArray, HeapObject>::PropertyArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PropertyArrayVerify(PropertyArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
