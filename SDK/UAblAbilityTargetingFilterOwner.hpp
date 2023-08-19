#pragma once
#include <cstdint>
#include "UAblAbilityTargetingFilter.hpp"
#pragma pack(push, 1)
class UAblAbilityTargetingFilterOwner : public UAblAbilityTargetingFilter {
public:
    static UAblAbilityTargetingFilterOwner* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
