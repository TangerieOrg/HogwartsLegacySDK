#pragma once
#include <cstdint>
#include "UObject.hpp"
class UFoliageRemoverBoundsComponent;
class ALandscapeProxy;
class UWorld;
class AInstancedFoliageActor;
#pragma pack(push, 1)
class UFoliageRemoverContainer : public UObject {
public:
    char pad_28[0x8];
    TArray<UFoliageRemoverBoundsComponent*> ActiveFoliageRemoverBoundsComponents; // 0x30
    TArray<UFoliageRemoverBoundsComponent*> PendingRegisterComponents; // 0x40
    TArray<UFoliageRemoverBoundsComponent*> PendingUnregisterComponents; // 0x50
    char pad_60[0x20];
    TArray<UFoliageRemoverBoundsComponent*> RetryRemoveGrassComponents; // 0x80
    TArray<UFoliageRemoverBoundsComponent*> RetryRemoveFoliageComponents; // 0x90
    char pad_a0[0x10];
    UWorld* CachedWorld; // 0xb0
    TArray<AInstancedFoliageActor*> CachedInstancedFoliageActors; // 0xb8
    TArray<ALandscapeProxy*> CachedLandscapeProxies; // 0xc8
    char pad_d8[0x10];
    static UFoliageRemoverContainer* StaticClass();
    void UnregisterFoliageRemoverBoundsComponent(UFoliageRemoverBoundsComponent* Component);
    void RegisterFoliageRemoverBoundsComponent(UFoliageRemoverBoundsComponent* Component);
    void OnAnyLevelLoaded();
}; // Size: 0xe8
#pragma pack(pop)
