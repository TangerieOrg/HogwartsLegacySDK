#include "AActor.hpp"
#include "FNiagaraHelpersInitializers.hpp"
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FNiagaraSystemSpawnInfo.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UNiagaraSystemWithVars.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UNiagaraSystemWithVars* UNiagaraSystemWithVars::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraSystemWithVars");
    return (UNiagaraSystemWithVars*)res;
}
void UNiagaraSystemWithVars::SpawnInWorldWithVars(UObject* WorldContextObject, FNiagaraSystemSpawnInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.SpawnInWorldWithVars"));
    struct Params_SpawnInWorldWithVars {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x60
    }; // Size: 0x68
    Params_SpawnInWorldWithVars params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpawnInfo = (FNiagaraSystemSpawnInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraSystemWithVars::SpawnAttachedWithVars(USceneComponent* SceneComponent, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.SpawnAttachedWithVars"));
    struct Params_SpawnAttachedWithVars {
        USceneComponent* SceneComponent; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x90
    }; // Size: 0x98
    Params_SpawnAttachedWithVars params{};
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedPointInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraSystemWithVars::RefreshDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.RefreshDefaults"));
    struct Params_RefreshDefaults {
    }; // Size: 0x0
    Params_RefreshDefaults params{};
    ProcessEvent(func, &params);
}
void UNiagaraSystemWithVars::SpawnAttachedActorWithVars(AActor* Actor, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.SpawnAttachedActorWithVars"));
    struct Params_SpawnAttachedActorWithVars {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x90
    }; // Size: 0x98
    Params_SpawnAttachedActorWithVars params{};
    params.Actor = (AActor*)Actor;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedPointInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraSystemWithVars::MultiSpawnOnStaticMeshesWithVars(AActor* Actor, FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnStaticMeshesWithVars"));
    struct Params_MultiSpawnOnStaticMeshesWithVars {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnMultiStaticInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x90
        TArray<UNiagaraComponent*> NiagaraComponents; // 0xa8
    }; // Size: 0xb8
    Params_MultiSpawnOnStaticMeshesWithVars params{};
    params.Actor = (AActor*)Actor;
    params.SpawnInfo = (FNiagaraSystemSpawnMultiStaticInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
void UNiagaraSystemWithVars::MultiSpawnOnPrimitivesWithVars(AActor* Actor, FNiagaraSystemSpawnAttachedInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnPrimitivesWithVars"));
    struct Params_MultiSpawnOnPrimitivesWithVars {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnAttachedInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x80
        TArray<UNiagaraComponent*> NiagaraComponents; // 0x98
    }; // Size: 0xa8
    Params_MultiSpawnOnPrimitivesWithVars params{};
    params.Actor = (AActor*)Actor;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
void UNiagaraSystemWithVars::MultiSpawnOnSkeletalMeshesWithVars(AActor* Actor, FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.MultiSpawnOnSkeletalMeshesWithVars"));
    struct Params_MultiSpawnOnSkeletalMeshesWithVars {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x90
        TArray<UNiagaraComponent*> NiagaraComponents; // 0xa8
    }; // Size: 0xb8
    Params_MultiSpawnOnSkeletalMeshesWithVars params{};
    params.Actor = (AActor*)Actor;
    params.SpawnInfo = (FNiagaraSystemSpawnMultiSkeletalInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
void UNiagaraSystemWithVars::ClearOverrides() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraSystemWithVars.ClearOverrides"));
    struct Params_ClearOverrides {
    }; // Size: 0x0
    Params_ClearOverrides params{};
    ProcessEvent(func, &params);
}
