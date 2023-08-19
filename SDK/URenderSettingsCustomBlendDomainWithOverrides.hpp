#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainWithOverrides : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* Default; // 0x28
    URenderSettingsCustomBlendDomain* OverrideOn; // 0x30
    URenderSettingsCustomBlendDomain* OverrideOff; // 0x38
    static URenderSettingsCustomBlendDomainWithOverrides* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
