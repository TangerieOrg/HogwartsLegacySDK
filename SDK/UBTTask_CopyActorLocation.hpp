#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_CopyActorLocation : public UBTTaskNode {
public:
    FBlackboardKeySelector ActorKey; // 0x70
    FBlackboardKeySelector LocationKey; // 0x98
    static UBTTask_CopyActorLocation* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
