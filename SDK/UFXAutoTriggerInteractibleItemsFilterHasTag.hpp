#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterHasTag : public UFXAutoTriggerInteractibleItemsFilter {
public:
    FName Tag; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterHasTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
