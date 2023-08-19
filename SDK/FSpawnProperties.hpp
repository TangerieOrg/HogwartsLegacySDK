#pragma once
#include <cstdint>
#include "ESpawnerActorSelectionMode.hpp"
#include "FSpawnableActorData.hpp"
#pragma pack(push, 1)
struct FSpawnProperties {
    ESpawnerActorSelectionMode ActorSelectionMode; // 0x0
    char pad_1[0x7];
    TArray<FSpawnableActorData> SpawnableActorData; // 0x8
    int32_t MinActorCount; // 0x18
    int32_t MaxActorCount; // 0x1c
    float MinDelayBetweenSpawns; // 0x20
    float MaxDelayBetweenSpawns; // 0x24
    bool bApplyAdditionalDelay; // 0x28
    char pad_29[0x3];
    float AdditionalDelay; // 0x2c
    char pad_30[0x8];
}; // Size: 0x38
#pragma pack(pop)
