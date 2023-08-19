#pragma once
#include <cstdint>
#include "UAblAbilityTargetingFilter.hpp"
class UClass;
#pragma pack(push, 1)
class UAblAbilityTargetingFilterClass : public UAblAbilityTargetingFilter {
public:
    UClass* m_Class; // 0x28
    bool m_Negate; // 0x30
    char pad_31[0x7];
    static UAblAbilityTargetingFilterClass* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
