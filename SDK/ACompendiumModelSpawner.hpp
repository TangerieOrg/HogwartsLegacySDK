#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ACompendiumModelSpawner : public AActor {
public:
    char pad_248[0x20];
    static ACompendiumModelSpawner* StaticClass();
    void UnloadModelClass();
    void ForceMountAssetsToBeResident(USkeletalMeshComponent* MountSK);
    void BP_OnModelClassLoaded(FString ItemName);
    void BP_LODsLoaded();
    void AsyncLoadModelClassFromDbId(FString InItemName);
}; // Size: 0x268
#pragma pack(pop)
