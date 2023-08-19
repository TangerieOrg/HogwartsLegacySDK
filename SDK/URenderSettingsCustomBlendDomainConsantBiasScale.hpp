#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainConsantBiasScale : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    float Bias; // 0x30
    float Scale; // 0x34
    static URenderSettingsCustomBlendDomainConsantBiasScale* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
