#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "AEncounterVolume.hpp"
#include "AEnemy_PerceptionPoint.hpp"
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FCustomButtonWidget.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FGameplayTag.hpp"
#include "FObjectVisualizationInfo.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
void AEncounterVolume::ProcessSpawnerSearch(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.ProcessSpawnerSearch"));
    struct Params_ProcessSpawnerSearch {
        FString ObjectName; // 0x0
    }; // Size: 0x10
    Params_ProcessSpawnerSearch params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
AEncounterVolume* AEncounterVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EncounterVolume");
    return (AEncounterVolume*)res;
}
void AEncounterVolume::SetAllowAutoActivation(bool bAllowAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.SetAllowAutoActivation"));
    struct Params_SetAllowAutoActivation {
        bool bAllowAutoActivate; // 0x0
    }; // Size: 0x1
    Params_SetAllowAutoActivation params{};
    params.bAllowAutoActivate = (bool)bAllowAutoActivate;
    ProcessEvent(func, &params);
}
void AEncounterVolume::ForceActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.ForceActivate"));
    struct Params_ForceActivate {
    }; // Size: 0x0
    Params_ForceActivate params{};
    ProcessEvent(func, &params);
}
int32_t AEncounterVolume::GetActiveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.GetActiveActorCount"));
    struct Params_GetActiveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AEncounterVolume::SetEncounterActor(ADynamicObjectVolume* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.SetEncounterActor"));
    struct Params_SetEncounterActor {
        ADynamicObjectVolume* InActor; // 0x0
    }; // Size: 0x8
    Params_SetEncounterActor params{};
    params.InActor = (ADynamicObjectVolume*)InActor;
    ProcessEvent(func, &params);
}
int32_t AEncounterVolume::GetAliveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.GetAliveActorCount"));
    struct Params_GetAliveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAliveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AEncounterVolume::ProcessZoneData(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.ProcessZoneData"));
    struct Params_ProcessZoneData {
        FString ObjectName; // 0x0
    }; // Size: 0x10
    Params_ProcessZoneData params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
void AEncounterVolume::ProcessEncounterReport(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.ProcessEncounterReport"));
    struct Params_ProcessEncounterReport {
        FString ObjectName; // 0x0
    }; // Size: 0x10
    Params_ProcessEncounterReport params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
bool AEncounterVolume::HasSpawned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.HasSpawned"));
    struct Params_HasSpawned {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasSpawned params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AEncounterVolume::IsVolumeActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.IsVolumeActive"));
    struct Params_IsVolumeActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVolumeActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t AEncounterVolume::GetSpawnActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.GetSpawnActorCount"));
    struct Params_GetSpawnActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpawnActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<AActor*> AEncounterVolume::GetAllActiveSpawnedInstances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.GetAllActiveSpawnedInstances"));
    struct Params_GetAllActiveSpawnedInstances {
        TArray<AActor*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllActiveSpawnedInstances params{};
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
void AEncounterVolume::ForceDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.ForceDeactivate"));
    struct Params_ForceDeactivate {
    }; // Size: 0x0
    Params_ForceDeactivate params{};
    ProcessEvent(func, &params);
}
bool AEncounterVolume::DoneSpawning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterVolume.DoneSpawning"));
    struct Params_DoneSpawning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoneSpawning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
