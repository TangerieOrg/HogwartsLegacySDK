#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
class UFXAutoTriggerInteractibleItemsFilter;
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsInteractibleItems : public UFXAutoTriggerRequiredActorsBase {
public:
    UFXAutoTriggerInteractibleItemsFilter* Filter; // 0x28
    static UFXAutoTriggerRequiredActorsInteractibleItems* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
