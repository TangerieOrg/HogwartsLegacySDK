#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainRemap : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    float InputMin; // 0x30
    float InputMax; // 0x34
    float OunputMin; // 0x38
    float OutputMax; // 0x3c
    static URenderSettingsCustomBlendDomainRemap* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
