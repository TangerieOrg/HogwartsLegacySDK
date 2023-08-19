#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_RemoveGroupCoordinatedTagFromActor : public UBTTaskNode {
public:
    FName TagID; // 0x70
    FBlackboardKeySelector ActorBlackboardKey; // 0x78
    bool bMustBeOwnedBySelf; // 0xa0
    char pad_a1[0x7];
    static UBTTask_Creature_RemoveGroupCoordinatedTagFromActor* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
