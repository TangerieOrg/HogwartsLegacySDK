#pragma once
#include <cstdint>
#include "AActor.hpp"
class AEncounterVolume;
class ASpawnLocation;
class ADynamicObjectVolume;
#pragma pack(push, 1)
class AEncounterCreator : public AActor {
public:
    char pad_248[0x8];
    bool bActivateEncounter; // 0x250
    bool bHideEncounterVolumes; // 0x251
    char pad_252[0x2];
    int32_t DynamicObjectVolumeCount; // 0x254
    int32_t SpawnLocationCount; // 0x258
    char pad_25c[0x4];
    AEncounterVolume* EncounterVolume; // 0x260
    TArray<ADynamicObjectVolume*> DynamicObjectVolumes; // 0x268
    TArray<ASpawnLocation*> SpawnLocations; // 0x278
    char pad_288[0x8];
    static AEncounterCreator* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
