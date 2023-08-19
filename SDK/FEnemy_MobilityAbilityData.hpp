#pragma once
#include <cstdint>
class UClass;
class UCurveFloat;
#pragma pack(push, 1)
struct FEnemy_MobilityAbilityData {
    UClass* MoveAbilityPtr; // 0x0
    float AnimSpeedMin; // 0x8
    float AnimSpeedMax; // 0xc
    UCurveFloat* TurnAssistCurve; // 0x10
    UCurveFloat* TurnAssistTimeMultiplier; // 0x18
}; // Size: 0x20
#pragma pack(pop)
