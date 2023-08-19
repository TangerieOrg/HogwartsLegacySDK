#pragma once
#include <cstdint>
#include "EAblCollisionFilterSort.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblCollisionFilter.hpp"
#pragma pack(push, 1)
class UAblCollisionFilterSortByDistance : public UAblCollisionFilter {
public:
    EAblCollisionFilterSort m_SortDirection; // 0x28
    char pad_29[0x3];
    FAblAbilityTargetTypeLocation m_Location; // 0x2c
    bool m_Use2DDistance; // 0x54
    char pad_55[0x3];
    static UAblCollisionFilterSortByDistance* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
