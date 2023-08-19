#include "AActor.hpp"
#include "APlayerCentricObjectVolume.hpp"
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FBox.hpp"
#include "FObjectVisualizationInfo.hpp"
#include "FSpawnSelectInfo.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UManualNavigationInvokerComponent.hpp"
#include "UPrimitiveComponent.hpp"
int32_t APlayerCentricObjectVolume::GetSpawnActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetSpawnActorCount"));
    struct Params_GetSpawnActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpawnActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void APlayerCentricObjectVolume::ObjectLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.ObjectLoaded"));
    struct Params_ObjectLoaded {
    }; // Size: 0x0
    Params_ObjectLoaded params{};
    ProcessEvent(func, &params);
}
APlayerCentricObjectVolume* APlayerCentricObjectVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerCentricObjectVolume");
    return (APlayerCentricObjectVolume*)res;
}
FVector APlayerCentricObjectVolume::GetVolumeExtents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetVolumeExtents"));
    struct Params_GetVolumeExtents {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetVolumeExtents params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APlayerCentricObjectVolume::OnActorSpawned(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.OnActorSpawned"));
    struct Params_OnActorSpawned {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_OnActorSpawned params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
void APlayerCentricObjectVolume::SetSpawnBoundsFromVectors(FVector& Min, FVector& Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.SetSpawnBoundsFromVectors"));
    struct Params_SetSpawnBoundsFromVectors {
        FVector Min; // 0x0
        FVector Max; // 0xc
    }; // Size: 0x18
    Params_SetSpawnBoundsFromVectors params{};
    params.Min = (FVector)Min;
    params.Max = (FVector)Max;
    ProcessEvent(func, &params);
    Min = params.Min;
    Max = params.Max;
}
void APlayerCentricObjectVolume::SetSpawnBounds(FBox& SpawnBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.SetSpawnBounds"));
    struct Params_SetSpawnBounds {
        FBox SpawnBounds; // 0x0
    }; // Size: 0x1c
    Params_SetSpawnBounds params{};
    params.SpawnBounds = (FBox)SpawnBounds;
    ProcessEvent(func, &params);
    SpawnBounds = params.SpawnBounds;
}
void APlayerCentricObjectVolume::SetEnableSpawning(bool bSpawningEnabled, bool bCullActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.SetEnableSpawning"));
    struct Params_SetEnableSpawning {
        bool bSpawningEnabled; // 0x0
        bool bCullActive; // 0x1
    }; // Size: 0x2
    Params_SetEnableSpawning params{};
    params.bSpawningEnabled = (bool)bSpawningEnabled;
    params.bCullActive = (bool)bCullActive;
    ProcessEvent(func, &params);
}
void APlayerCentricObjectVolume::OnFinishedSpawning(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.OnFinishedSpawning"));
    struct Params_OnFinishedSpawning {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_OnFinishedSpawning params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
void APlayerCentricObjectVolume::ForceActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.ForceActivate"));
    struct Params_ForceActivate {
    }; // Size: 0x0
    Params_ForceActivate params{};
    ProcessEvent(func, &params);
}
void APlayerCentricObjectVolume::SetAllowAutoActivation(bool bAllowAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.SetAllowAutoActivation"));
    struct Params_SetAllowAutoActivation {
        bool bAllowAutoActivate; // 0x0
    }; // Size: 0x1
    Params_SetAllowAutoActivation params{};
    params.bAllowAutoActivate = (bool)bAllowAutoActivate;
    ProcessEvent(func, &params);
}
bool APlayerCentricObjectVolume::HasSpawned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.HasSpawned"));
    struct Params_HasSpawned {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasSpawned params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FBox APlayerCentricObjectVolume::GetSpawnBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetSpawnBounds"));
    struct Params_GetSpawnBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetSpawnBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
FBox APlayerCentricObjectVolume::GetVolumeBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetVolumeBounds"));
    struct Params_GetVolumeBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetVolumeBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
int32_t APlayerCentricObjectVolume::GetAliveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetAliveActorCount"));
    struct Params_GetAliveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAliveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t APlayerCentricObjectVolume::GetActiveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.GetActiveActorCount"));
    struct Params_GetActiveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void APlayerCentricObjectVolume::ForceDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.ForceDeactivate"));
    struct Params_ForceDeactivate {
    }; // Size: 0x0
    Params_ForceDeactivate params{};
    ProcessEvent(func, &params);
}
bool APlayerCentricObjectVolume::DoneSpawning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCentricObjectVolume.DoneSpawning"));
    struct Params_DoneSpawning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoneSpawning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
