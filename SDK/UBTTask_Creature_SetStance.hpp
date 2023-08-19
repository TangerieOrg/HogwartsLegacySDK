#pragma once
#include <cstdint>
#include "ECreatureStance.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_SetStance : public UBTTaskNode {
public:
    ECreatureStance Stance; // 0x70
    bool bWait; // 0x71
    char pad_72[0x6];
    static UBTTask_Creature_SetStance* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
