#pragma once
#include <cstdint>
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class UTauntDragon_AttackExtraData : public UEnemy_AttackExtraData {
public:
    FString TargetObjectName; // 0x28
    float AddedAttackScore; // 0x38
    bool bDoDebugDraw; // 0x3c
    bool bForceThisAttack; // 0x3d
    char pad_3e[0x2];
    static UTauntDragon_AttackExtraData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
