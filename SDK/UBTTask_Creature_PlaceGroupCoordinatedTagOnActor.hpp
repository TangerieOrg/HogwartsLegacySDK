#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_PlaceGroupCoordinatedTagOnActor : public UBTTaskNode {
public:
    FName TagID; // 0x70
    FBlackboardKeySelector ActorBlackboardKey; // 0x78
    float LifeTime; // 0xa0
    char pad_a4[0x4];
    static UBTTask_Creature_PlaceGroupCoordinatedTagOnActor* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
