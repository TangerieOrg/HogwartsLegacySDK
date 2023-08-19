#pragma once
#include <cstdint>
#include "UWorldFXRuleBlendDomainPreComputed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleBlendDomainThreshold : public UWorldFXRuleBlendDomainPreComputed {
public:
    float Threshold; // 0x38
    char pad_3c[0x4];
    static UWorldFXRuleBlendDomainThreshold* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
