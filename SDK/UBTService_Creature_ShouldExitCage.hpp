#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_ShouldExitCage : public UBTService {
public:
    FBlackboardKeySelector CageBlackboardKey; // 0x70
    FBlackboardKeySelector ShouldExitBlackboardKey; // 0x98
    FBlackboardKeySelector TargetBlackboardKey; // 0xc0
    static UBTService_Creature_ShouldExitCage* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
