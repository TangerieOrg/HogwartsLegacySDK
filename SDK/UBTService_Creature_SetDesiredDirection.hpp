#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_SetDesiredDirection : public UBTService {
public:
    FBlackboardKeySelector TargetActorOrLocationKey; // 0x70
    static UBTService_Creature_SetDesiredDirection* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
