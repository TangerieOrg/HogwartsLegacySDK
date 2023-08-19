#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "UExposureExpressionsBlendDomainScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsPreComputedBlendDomainNamedScalarValue : public UExposureExpressionsBlendDomainScalarValue {
public:
    FRenderSettingsCustomBlendDomainName BlendDomain; // 0x30
    static UExposureExpressionsPreComputedBlendDomainNamedScalarValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
