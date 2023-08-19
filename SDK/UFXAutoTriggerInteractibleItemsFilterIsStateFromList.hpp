#pragma once
#include <cstdint>
#include "EInteractiveState.hpp"
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterIsStateFromList : public UFXAutoTriggerInteractibleItemsFilter {
public:
    TArray<EInteractiveState> States; // 0x28
    static UFXAutoTriggerInteractibleItemsFilterIsStateFromList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
