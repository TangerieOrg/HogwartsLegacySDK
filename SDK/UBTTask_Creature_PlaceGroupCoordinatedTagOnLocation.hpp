#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation : public UBTTaskNode {
public:
    FName TagID; // 0x70
    FBlackboardKeySelector LocationBlackboardKey; // 0x78
    float LocationRadius; // 0xa0
    float LifeTime; // 0xa4
    bool bRemoveExistingTags; // 0xa8
    char pad_a9[0x7];
    static UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
