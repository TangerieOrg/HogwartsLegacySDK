#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterHasSenseFromList : public UFXAutoTriggerInteractibleItemsFilter {
public:
    TArray<void*> Senses; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterHasSenseFromList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
