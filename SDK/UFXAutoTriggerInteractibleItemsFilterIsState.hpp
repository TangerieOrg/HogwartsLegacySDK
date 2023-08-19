#pragma once
#include <cstdint>
#include "EInteractiveState.hpp"
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterIsState : public UFXAutoTriggerInteractibleItemsFilter {
public:
    EInteractiveState State; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerInteractibleItemsFilterIsState* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
