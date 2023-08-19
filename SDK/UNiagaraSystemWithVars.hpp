#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializers.hpp"
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FNiagaraSystemSpawnInfo.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "UDataAsset.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
class USceneComponent;
class UObject;
class AActor;
#pragma pack(push, 1)
class UNiagaraSystemWithVars : public UDataAsset {
public:
    char pad_30[0x8];
    UNiagaraSystem* NiagaraSystem; // 0x38
    FNiagaraHelpersInitializers Overrides; // 0x40
    static UNiagaraSystemWithVars* StaticClass();
    void SpawnInWorldWithVars(UObject* WorldContextObject, FNiagaraSystemSpawnInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    void SpawnAttachedWithVars(USceneComponent* SceneComponent, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    void SpawnAttachedActorWithVars(AActor* Actor, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    void RefreshDefaults();
    void MultiSpawnOnStaticMeshesWithVars(AActor* Actor, FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    void MultiSpawnOnSkeletalMeshesWithVars(AActor* Actor, FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    void MultiSpawnOnPrimitivesWithVars(AActor* Actor, FNiagaraSystemSpawnAttachedInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    void ClearOverrides();
}; // Size: 0xb0
#pragma pack(pop)
