#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
class UCurveFloat;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainCurveRemap : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    UCurveFloat* Curve; // 0x30
    static URenderSettingsCustomBlendDomainCurveRemap* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
