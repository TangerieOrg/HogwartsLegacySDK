#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FeedAtLocation : public UBTTaskNode {
public:
    FBlackboardKeySelector FeedActorKey; // 0x70
    FBlackboardKeySelector MoveToLocationKey; // 0x98
    float ExtraFeedOffset; // 0xc0
    char pad_c4[0x4];
    static UBTTask_Creature_FeedAtLocation* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
