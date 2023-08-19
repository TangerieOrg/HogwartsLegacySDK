#pragma once
#include <cstdint>
class ASpawnLocation;
#pragma pack(push, 1)
struct FEncounterGroupInfo {
    bool bIsPersistent; // 0x0
    char pad_1[0x7];
    TArray<ASpawnLocation*> EncounterSpawnLocations; // 0x8
    float SpawnProbability; // 0x18
    bool bForceSpawnOnFloor; // 0x1c
    bool bUseScatterSpawn; // 0x1d
    bool bSpawnOnNavMesh; // 0x1e
    char pad_1f[0x1];
    float RadiusForNavCheck; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
