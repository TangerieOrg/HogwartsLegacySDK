#pragma once
#include <cstdint>
#include "ETurnInType.hpp"
#pragma pack(push, 1)
struct FCurriculumRequirements_Updated {
    ETurnInType TurnInType; // 0x0
    char pad_1[0x7];
    FString TurnInID; // 0x8
    FString TurnInNPC; // 0x18
    int32_t Quantity; // 0x28
    int32_t Tier; // 0x2c
    FString Detail; // 0x30
    TArray<FName> RelatedItems; // 0x40
}; // Size: 0x50
#pragma pack(pop)
