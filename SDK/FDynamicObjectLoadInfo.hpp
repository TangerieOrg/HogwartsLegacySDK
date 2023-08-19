#pragma once
#include <cstdint>
#include "FCreatureSpawnOverrides.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FDynamicObjectLoadInfo {
    bool bIsPersistent; // 0x0
    bool bFindValidPostion; // 0x1
    bool bIsQuestRelevant; // 0x2
    char pad_3[0xd];
    FTransform InTransform; // 0x10
    FEnemy_CharacterParams EnemyParams; // 0x40
    FCreatureSpawnOverrides CreatureSpawnOverrides; // 0x4d0
    float SearchRadius; // 0x550
    int32_t ParentID; // 0x554
    int32_t ObjectID; // 0x558
    char pad_55c[0x4];
    FString TeamAssignment; // 0x560
    FString LootGroupOverride; // 0x570
    FString ScheduleFilter; // 0x580
    FString ScheduleTable; // 0x590
    FString WorldID; // 0x5a0
    FString LevelOverride; // 0x5b0
}; // Size: 0x5c0
#pragma pack(pop)
