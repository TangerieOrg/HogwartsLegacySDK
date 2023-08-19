#pragma once
#include <cstdint>
#include "UObject.hpp"
class UEnemy_AttackExtraData;
#pragma pack(push, 1)
class UEnemyAIAttackInstanceData : public UObject {
public:
    char pad_28[0x140];
    UEnemy_AttackExtraData* ExtraData; // 0x168
    char pad_170[0x80];
    static UEnemyAIAttackInstanceData* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
