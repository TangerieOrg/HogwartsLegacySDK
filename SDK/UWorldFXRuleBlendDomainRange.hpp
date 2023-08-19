#pragma once
#include <cstdint>
#include "UWorldFXRuleBlendDomainPreComputed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleBlendDomainRange : public UWorldFXRuleBlendDomainPreComputed {
public:
    float minThreshold; // 0x38
    float maxThreshold; // 0x3c
    static UWorldFXRuleBlendDomainRange* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
