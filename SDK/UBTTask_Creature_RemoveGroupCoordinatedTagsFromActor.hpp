#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor : public UBTTaskNode {
public:
    TArray<FName> TagIDs; // 0x70
    FBlackboardKeySelector ActorBlackboardKey; // 0x80
    bool bMustBeOwnedBySelf; // 0xa8
    char pad_a9[0x7];
    static UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
