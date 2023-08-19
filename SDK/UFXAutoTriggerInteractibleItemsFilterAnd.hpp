#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterAnd : public UFXAutoTriggerInteractibleItemsFilter {
public:
    TArray<UFXAutoTriggerInteractibleItemsFilter*> Filters; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterAnd* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
