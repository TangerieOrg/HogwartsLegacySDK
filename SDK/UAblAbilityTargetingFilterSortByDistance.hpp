#pragma once
#include <cstdint>
#include "EAblTargetingFilterSort.hpp"
#include "UAblAbilityTargetingFilter.hpp"
#pragma pack(push, 1)
class UAblAbilityTargetingFilterSortByDistance : public UAblAbilityTargetingFilter {
public:
    bool m_Use2DDistance; // 0x28
    EAblTargetingFilterSort m_SortDirection; // 0x29
    char pad_2a[0x6];
    static UAblAbilityTargetingFilterSortByDistance* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
