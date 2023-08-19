#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_RandomizeIdleBehaviorLoops : public UBTTaskNode {
public:
    bool bAdjustForTimeOfDayIfWild; // 0x70
    char pad_71[0x7];
    static UBTTask_Creature_RandomizeIdleBehaviorLoops* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
