#include "UExposureExpressionsBlendDomainScalarValue.hpp"
#include "UExposureExpressionsScalarValue.hpp"
UExposureExpressionsBlendDomainScalarValue* UExposureExpressionsBlendDomainScalarValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExposureExpressionsBlendDomainScalarValue");
    return (UExposureExpressionsBlendDomainScalarValue*)res;
}
