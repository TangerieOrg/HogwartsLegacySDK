#include "AActor.hpp"
#include "ACompendiumModelSpawner.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
ACompendiumModelSpawner* ACompendiumModelSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompendiumModelSpawner");
    return (ACompendiumModelSpawner*)res;
}
void ACompendiumModelSpawner::BP_LODsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompendiumModelSpawner.BP_LODsLoaded"));
    struct Params_BP_LODsLoaded {
    }; // Size: 0x0
    Params_BP_LODsLoaded params{};
    ProcessEvent(func, &params);
}
void ACompendiumModelSpawner::UnloadModelClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompendiumModelSpawner.UnloadModelClass"));
    struct Params_UnloadModelClass {
    }; // Size: 0x0
    Params_UnloadModelClass params{};
    ProcessEvent(func, &params);
}
void ACompendiumModelSpawner::ForceMountAssetsToBeResident(USkeletalMeshComponent* MountSK) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompendiumModelSpawner.ForceMountAssetsToBeResident"));
    struct Params_ForceMountAssetsToBeResident {
        USkeletalMeshComponent* MountSK; // 0x0
    }; // Size: 0x8
    Params_ForceMountAssetsToBeResident params{};
    params.MountSK = (USkeletalMeshComponent*)MountSK;
    ProcessEvent(func, &params);
}
void ACompendiumModelSpawner::BP_OnModelClassLoaded(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompendiumModelSpawner.BP_OnModelClassLoaded"));
    struct Params_BP_OnModelClassLoaded {
        FString ItemName; // 0x0
    }; // Size: 0x10
    Params_BP_OnModelClassLoaded params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
}
void ACompendiumModelSpawner::AsyncLoadModelClassFromDbId(FString InItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompendiumModelSpawner.AsyncLoadModelClassFromDbId"));
    struct Params_AsyncLoadModelClassFromDbId {
        FString InItemName; // 0x0
    }; // Size: 0x10
    Params_AsyncLoadModelClassFromDbId params{};
    params.InItemName = (FString)InItemName;
    ProcessEvent(func, &params);
}
