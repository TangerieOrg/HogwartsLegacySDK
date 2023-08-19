#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
#include "EAmbientCreatureSpawnVolumePriority.hpp"
#include "EAmbientCreatureSpawnVolumeType.hpp"
#include "FDbSingleColumnInfo.hpp"
class AActor;
#pragma pack(push, 1)
class AAmbientCreatureSpawnVolume : public ATriggerBox {
public:
    EAmbientCreatureSpawnVolumeType VolumeType; // 0x250
    char pad_254[0x4];
    FDbSingleColumnInfo CreatureGroupSelector; // 0x258
    EAmbientCreatureSpawnVolumePriority VolumePriority; // 0x2e0
    float RangeMultiplier; // 0x2e4
    bool bSuppressSpawning; // 0x2e8
    char pad_2e9[0x17];
    static AAmbientCreatureSpawnVolume* StaticClass();
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x300
#pragma pack(pop)
