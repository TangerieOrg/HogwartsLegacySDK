#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterHasSense : public UFXAutoTriggerInteractibleItemsFilter {
public:
    char pad_28[0x28];
    static UFXAutoTriggerInteractibleItemsFilterHasSense* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
