#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_OverlapChecker : public UBTService {
public:
    FName TagName; // 0x70
    FBlackboardKeySelector OverlappingActorBlackboardKey; // 0x78
    static UBTService_Creature_OverlapChecker* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
