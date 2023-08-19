#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#pragma pack(push, 1)
class UBTService_CameraCombat : public UBTService_CameraBase {
public:
    char pad_70[0x8];
    FBlackboardKeySelector InCombatKey; // 0x78
    char pad_a0[0x18];
    FBlackboardKeySelector NumAwareEnemiesKey; // 0xb8
    FBlackboardKeySelector NumAggroEnemiesKey; // 0xe0
    FBlackboardKeySelector NumAttackingEnemiesKey; // 0x108
    static UBTService_CameraCombat* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
