#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainStep : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    float Threshold; // 0x30
    char pad_34[0x4];
    static URenderSettingsCustomBlendDomainStep* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
