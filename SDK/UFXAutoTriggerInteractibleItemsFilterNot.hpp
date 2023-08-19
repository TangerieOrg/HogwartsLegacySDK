#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterNot : public UFXAutoTriggerInteractibleItemsFilter {
public:
    UFXAutoTriggerInteractibleItemsFilter* Filter; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
