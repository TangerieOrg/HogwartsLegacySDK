#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_SetSlopeHeadingTarget : public UBTTaskNode {
public:
    FBlackboardKeySelector TargetLocationKey; // 0x70
    FBlackboardKeySelector FacingTargetLocationKey; // 0x98
    float MinNormalZValue; // 0xc0
    float FacingMoveToLocationOffset; // 0xc4
    static UBTTask_Creature_SetSlopeHeadingTarget* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
