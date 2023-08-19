#pragma once
#include <cstdint>
#include "FXAutoTriggerCustomConditionsSet.hpp"
#pragma pack(push, 1)
struct FXAutoTriggerPerWorldCustomConditions {
    char pad_0[0x50];
    FXAutoTriggerCustomConditionsSet WorldConditions; // 0x50
}; // Size: 0x60
#pragma pack(pop)
