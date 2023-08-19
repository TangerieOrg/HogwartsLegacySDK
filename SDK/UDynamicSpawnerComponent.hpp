#pragma once
#include <cstdint>
#include "FSpawnInfoGroup.hpp"
#include "UActorComponent.hpp"
class ADynamicObjectVolume;
class AActor;
#pragma pack(push, 1)
class UDynamicSpawnerComponent : public UActorComponent {
public:
    TArray<FSpawnInfoGroup> SpawnObjectInfo; // 0xc8
    bool AllowRealTimeSpawnerGeneration; // 0xd8
    char pad_d9[0x7];
    ADynamicObjectVolume* MyDynamicVolume; // 0xe0
    char pad_e8[0x10];
    static UDynamicSpawnerComponent* StaticClass();
    void OnSpawnFinished(FName& GroupName);
    void OnActorSpawned(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0xf8
#pragma pack(pop)
