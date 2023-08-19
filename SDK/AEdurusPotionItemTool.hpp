#pragma once
#include <cstdint>
#include "AConsumablePotionItemTool.hpp"
#include "EObjectTypeQuery.hpp"
#include "FGameplayTag.hpp"
class UClass;
#pragma pack(push, 1)
class AEdurusPotionItemTool : public AConsumablePotionItemTool {
public:
    FGameplayTag m_EdurusRockEffectAbilityTag; // 0x488
    FName m_RelativeSpawnBoneName; // 0x490
    float m_MinRockDamage; // 0x498
    float m_MaxRockDamage; // 0x49c
    float m_EnemySeekRadius; // 0x4a0
    char pad_4a4[0x4];
    TArray<EObjectTypeQuery> ObjectTypes; // 0x4a8
    float m_MinDistFromOwner; // 0x4b8
    float m_MaxDistFromOwner; // 0x4bc
    float m_MinRockLaunchTime; // 0x4c0
    float m_MaxRockLaunchTime; // 0x4c4
    int32_t m_MinNumRocks; // 0x4c8
    int32_t m_MaxNumRocks; // 0x4cc
    UClass* m_RockMunition; // 0x4d0
    static AEdurusPotionItemTool* StaticClass();
}; // Size: 0x4d8
#pragma pack(pop)
