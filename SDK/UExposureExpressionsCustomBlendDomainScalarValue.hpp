#pragma once
#include <cstdint>
#include "UExposureExpressionsBlendDomainScalarValue.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UExposureExpressionsCustomBlendDomainScalarValue : public UExposureExpressionsBlendDomainScalarValue {
public:
    URenderSettingsCustomBlendDomain* BlendDomain; // 0x30
    static UExposureExpressionsCustomBlendDomainScalarValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
