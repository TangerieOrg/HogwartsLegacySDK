#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "UExposureExpressionsBlendDomainScalarValue.hpp"
#include "UExposureExpressionsPreComputedBlendDomainNamedScalarValue.hpp"
UExposureExpressionsPreComputedBlendDomainNamedScalarValue* UExposureExpressionsPreComputedBlendDomainNamedScalarValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExposureExpressionsPreComputedBlendDomainNamedScalarValue");
    return (UExposureExpressionsPreComputedBlendDomainNamedScalarValue*)res;
}
