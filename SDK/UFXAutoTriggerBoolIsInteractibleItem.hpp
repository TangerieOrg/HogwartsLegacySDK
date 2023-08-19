#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerInteractibleItemsFilter;
#pragma pack(push, 1)
class UFXAutoTriggerBoolIsInteractibleItem : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerInteractibleItemsFilter* Filter; // 0x28
    static UFXAutoTriggerBoolIsInteractibleItem* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
