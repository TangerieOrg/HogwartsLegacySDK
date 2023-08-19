#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterOr : public UFXAutoTriggerInteractibleItemsFilter {
public:
    TArray<UFXAutoTriggerInteractibleItemsFilter*> Filters; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
