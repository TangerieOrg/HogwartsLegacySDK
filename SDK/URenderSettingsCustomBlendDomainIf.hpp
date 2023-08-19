#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainIf : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* A; // 0x28
    URenderSettingsCustomBlendDomain* B; // 0x30
    URenderSettingsCustomBlendDomain* ALessThanB; // 0x38
    URenderSettingsCustomBlendDomain* AEqualsB; // 0x40
    URenderSettingsCustomBlendDomain* AGreaterThanB; // 0x48
    static URenderSettingsCustomBlendDomainIf* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
