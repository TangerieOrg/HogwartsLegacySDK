#pragma once
#include <cstdint>
#include "UAblAbilityTargetingFilter.hpp"
#pragma pack(push, 1)
class UAblAbilityTargetingFilterMaxTargets : public UAblAbilityTargetingFilter {
public:
    int32_t m_MaxTargets; // 0x28
    char pad_2c[0x4];
    static UAblAbilityTargetingFilterMaxTargets* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
