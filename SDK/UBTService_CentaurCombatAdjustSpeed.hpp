#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_CentaurCombatAdjustSpeed : public UBTService {
public:
    FBlackboardKeySelector MoveToLocationKey; // 0x70
    float JogSprintDistanceThreshold; // 0x98
    char pad_9c[0x4];
    static UBTService_CentaurCombatAdjustSpeed* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
