#pragma once
#include <cstdint>
#include "UAblAbilityTargetingFilter.hpp"
#pragma pack(push, 1)
class UAblAbilityTargetingFilterCustom : public UAblAbilityTargetingFilter {
public:
    FName m_EventName; // 0x28
    bool m_UseAsync; // 0x30
    char pad_31[0x7];
    static UAblAbilityTargetingFilterCustom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
