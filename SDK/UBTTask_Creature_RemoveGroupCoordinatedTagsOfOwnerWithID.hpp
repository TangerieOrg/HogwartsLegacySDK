#pragma once
#include <cstdint>
#include "ECreatureGroupCoordinationTagTypesToRemove.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_RemoveGroupCoordinatedTagsOfOwnerWithID : public UBTTaskNode {
public:
    ECreatureGroupCoordinationTagTypesToRemove TagType; // 0x70
    char pad_71[0x3];
    FName TagID; // 0x74
    char pad_7c[0x4];
    FBlackboardKeySelector OwnerBlackboardKey; // 0x80
    static UBTTask_Creature_RemoveGroupCoordinatedTagsOfOwnerWithID* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
