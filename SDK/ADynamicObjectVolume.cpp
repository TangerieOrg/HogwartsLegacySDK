#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "APerceptionPointBox.hpp"
#include "ASpawnLocation.hpp"
#include "ATargetPoint.hpp"
#include "EDynamicObjectVolumeDiscoveryType.hpp"
#include "EDynamicObjectVolumeSpawnDistributionType.hpp"
#include "ESpawnVolumeType.hpp"
#include "FBox.hpp"
#include "FCreatureSpawnOverrides.hpp"
#include "FCustomButtonWidget.hpp"
#include "FDOVScheduleData.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FEncounterGroupInfo.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_DbIdInfo.hpp"
#include "FObjectVisualizationInfo.hpp"
#include "FPerPlatformInt.hpp"
#include "FSpawnSelectInfo.hpp"
#include "FVector.hpp"
#include "UEncounterSpawnComponent.hpp"
#include "UFunction.hpp"
#include "UManualNavigationInvokerComponent.hpp"
#include "UMissionSpawnComponent.hpp"
#include "UOwnershipComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTextRenderComponent.hpp"
ADynamicObjectVolume* ADynamicObjectVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicObjectVolume");
    return (ADynamicObjectVolume*)res;
}
void ADynamicObjectVolume::TerminateContinuousSpawning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.TerminateContinuousSpawning"));
    struct Params_TerminateContinuousSpawning {
    }; // Size: 0x0
    Params_TerminateContinuousSpawning params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ForceSpawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ForceSpawn"));
    struct Params_ForceSpawn {
    }; // Size: 0x0
    Params_ForceSpawn params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::SetEnableSpawning(bool bSpawningEnabled, bool bCullActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetEnableSpawning"));
    struct Params_SetEnableSpawning {
        bool bSpawningEnabled; // 0x0
        bool bCullActive; // 0x1
    }; // Size: 0x2
    Params_SetEnableSpawning params{};
    params.bSpawningEnabled = (bool)bSpawningEnabled;
    params.bCullActive = (bool)bCullActive;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearAliveVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearAliveVolumes"));
    struct Params_ClearAliveVolumes {
    }; // Size: 0x0
    Params_ClearAliveVolumes params{};
    ProcessEvent(func, &params);
}
FBox ADynamicObjectVolume::GetSpawnBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetSpawnBounds"));
    struct Params_GetSpawnBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetSpawnBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
void ADynamicObjectVolume::SetSpawnLocations(TArray<ASpawnLocation*> InSpawnLocations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetSpawnLocations"));
    struct Params_SetSpawnLocations {
        TArray<ASpawnLocation*> InSpawnLocations; // 0x0
    }; // Size: 0x10
    Params_SetSpawnLocations params{};
    params.InSpawnLocations = (TArray<ASpawnLocation*>)InSpawnLocations;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearTeamShareVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearTeamShareVolumes"));
    struct Params_ClearTeamShareVolumes {
    }; // Size: 0x0
    Params_ClearTeamShareVolumes params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::SetSpawnSequenceComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetSpawnSequenceComplete"));
    struct Params_SetSpawnSequenceComplete {
    }; // Size: 0x0
    Params_SetSpawnSequenceComplete params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::SetSpawnBoundsFromVectors(FVector& Min, FVector& Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetSpawnBoundsFromVectors"));
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
void ADynamicObjectVolume::SetAllowAutoActivation(bool bAllowAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetAllowAutoActivation"));
    struct Params_SetAllowAutoActivation {
        bool bAllowAutoActivate; // 0x0
    }; // Size: 0x1
    Params_SetAllowAutoActivation params{};
    params.bAllowAutoActivate = (bool)bAllowAutoActivate;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::SetSpawnBounds(FBox& SpawnBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.SetSpawnBounds"));
    struct Params_SetSpawnBounds {
        FBox SpawnBounds; // 0x0
    }; // Size: 0x1c
    Params_SetSpawnBounds params{};
    params.SpawnBounds = (FBox)SpawnBounds;
    ProcessEvent(func, &params);
    SpawnBounds = params.SpawnBounds;
}
void ADynamicObjectVolume::ContinuousSpawnDelayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ContinuousSpawnDelayed"));
    struct Params_ContinuousSpawnDelayed {
    }; // Size: 0x0
    Params_ContinuousSpawnDelayed params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::OnActorSpawnFinished(AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorSpawnFinished"));
    struct Params_OnActorSpawnFinished {
        AActor* SpawnedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorSpawnFinished params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ResetContinuousSpawning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ResetContinuousSpawning"));
    struct Params_ResetContinuousSpawning {
    }; // Size: 0x0
    Params_ResetContinuousSpawning params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::OnFinishedSpawning(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnFinishedSpawning"));
    struct Params_OnFinishedSpawning {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_OnFinishedSpawning params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
bool ADynamicObjectVolume::AllowAllDeadEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AllowAllDeadEvent"));
    struct Params_AllowAllDeadEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AllowAllDeadEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADynamicObjectVolume::OnActorSpawnPrep(FString SpawnGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorSpawnPrep"));
    struct Params_OnActorSpawnPrep {
        FString SpawnGroup; // 0x0
    }; // Size: 0x10
    Params_OnActorSpawnPrep params{};
    params.SpawnGroup = (FString)SpawnGroup;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddPerceiveVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddPerceiveVolume"));
    struct Params_AddPerceiveVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddPerceiveVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::OnActorSpawnInFinished(AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorSpawnInFinished"));
    struct Params_OnActorSpawnInFinished {
        AActor* SpawnedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorSpawnInFinished params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearStayInVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearStayInVolumes"));
    struct Params_ClearStayInVolumes {
    }; // Size: 0x0
    Params_ClearStayInVolumes params{};
    ProcessEvent(func, &params);
}
FBox ADynamicObjectVolume::GetVolumeBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetVolumeBounds"));
    struct Params_GetVolumeBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetVolumeBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
void ADynamicObjectVolume::OnActorSpawnFinalize(AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorSpawnFinalize"));
    struct Params_OnActorSpawnFinalize {
        AActor* SpawnedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorSpawnFinalize params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::OnActorSpawned(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorSpawned"));
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
void ADynamicObjectVolume::OnActorDeadEvent(AActor* DeadActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.OnActorDeadEvent"));
    struct Params_OnActorDeadEvent {
        AActor* DeadActor; // 0x0
    }; // Size: 0x8
    Params_OnActorDeadEvent params{};
    params.DeadActor = (AActor*)DeadActor;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ObjectLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ObjectLoaded"));
    struct Params_ObjectLoaded {
    }; // Size: 0x0
    Params_ObjectLoaded params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddKillVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddKillVolume"));
    struct Params_AddKillVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddKillVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ObjectInfoComplete(FNPC_DbIdInfo InObjectIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ObjectInfoComplete"));
    struct Params_ObjectInfoComplete {
        FNPC_DbIdInfo InObjectIDs; // 0x0
    }; // Size: 0x78
    Params_ObjectInfoComplete params{};
    params.InObjectIDs = (FNPC_DbIdInfo)InObjectIDs;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::DestroySpawnedActor(AActor* actorToDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.DestroySpawnedActor"));
    struct Params_DestroySpawnedActor {
        AActor* actorToDestroy; // 0x0
    }; // Size: 0x8
    Params_DestroySpawnedActor params{};
    params.actorToDestroy = (AActor*)actorToDestroy;
    ProcessEvent(func, &params);
}
bool ADynamicObjectVolume::IsAutoActivationEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.IsAutoActivationEnabled"));
    struct Params_IsAutoActivationEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAutoActivationEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ADynamicObjectVolume::IsSpawningEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.IsSpawningEnabled"));
    struct Params_IsSpawningEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpawningEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADynamicObjectVolume::ClearTargetExcludeVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearTargetExcludeVolumes"));
    struct Params_ClearTargetExcludeVolumes {
    }; // Size: 0x0
    Params_ClearTargetExcludeVolumes params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::InitializeTags(FGameplayTagContainer InTagsToConsider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.InitializeTags"));
    struct Params_InitializeTags {
        FGameplayTagContainer InTagsToConsider; // 0x0
    }; // Size: 0x20
    Params_InitializeTags params{};
    params.InTagsToConsider = (FGameplayTagContainer)InTagsToConsider;
    ProcessEvent(func, &params);
}
bool ADynamicObjectVolume::HasSpawned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.HasSpawned"));
    struct Params_HasSpawned {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasSpawned params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector ADynamicObjectVolume::GetVolumeExtents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetVolumeExtents"));
    struct Params_GetVolumeExtents {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetVolumeExtents params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ADynamicObjectVolume::AddForcePerceiveVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddForcePerceiveVolume"));
    struct Params_AddForcePerceiveVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddForcePerceiveVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
int32_t ADynamicObjectVolume::GetSpawnActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetSpawnActorCount"));
    struct Params_GetSpawnActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpawnActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t ADynamicObjectVolume::GetObjectCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetObjectCount"));
    struct Params_GetObjectCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetObjectCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ADynamicObjectVolume::AddAliveVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddAliveVolume"));
    struct Params_AddAliveVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddAliveVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ForceActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ForceActivate"));
    struct Params_ForceActivate {
    }; // Size: 0x0
    Params_ForceActivate params{};
    ProcessEvent(func, &params);
}
int32_t ADynamicObjectVolume::GetKillActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetKillActorCount"));
    struct Params_GetKillActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetKillActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool ADynamicObjectVolume::AllowLinkedEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AllowLinkedEvent"));
    struct Params_AllowLinkedEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AllowLinkedEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADynamicObjectVolume::GetAllActiveInstances(TArray<AActor*>& OutInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetAllActiveInstances"));
    struct Params_GetAllActiveInstances {
        TArray<AActor*> OutInstances; // 0x0
    }; // Size: 0x10
    Params_GetAllActiveInstances params{};
    params.OutInstances = (TArray<AActor*>)OutInstances;
    ProcessEvent(func, &params);
    OutInstances = params.OutInstances;
}
int32_t ADynamicObjectVolume::GetAliveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetAliveActorCount"));
    struct Params_GetAliveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAliveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ADynamicObjectVolume::EncounterActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.EncounterActivate"));
    struct Params_EncounterActivate {
    }; // Size: 0x0
    Params_EncounterActivate params{};
    ProcessEvent(func, &params);
}
bool ADynamicObjectVolume::GetActiveInstances(FString InSpawnGroup, TArray<AActor*>& OutInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetActiveInstances"));
    struct Params_GetActiveInstances {
        FString InSpawnGroup; // 0x0
        TArray<AActor*> OutInstances; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetActiveInstances params{};
    params.InSpawnGroup = (FString)InSpawnGroup;
    params.OutInstances = (TArray<AActor*>)OutInstances;
    ProcessEvent(func, &params);
    OutInstances = params.OutInstances;
    return (bool)params.ReturnValue;
}
int32_t ADynamicObjectVolume::GetActiveActorCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.GetActiveActorCount"));
    struct Params_GetActiveActorCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveActorCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ADynamicObjectVolume::ForceDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ForceDeactivate"));
    struct Params_ForceDeactivate {
    }; // Size: 0x0
    Params_ForceDeactivate params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::EncounterDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.EncounterDeactivate"));
    struct Params_EncounterDeactivate {
    }; // Size: 0x0
    Params_EncounterDeactivate params{};
    ProcessEvent(func, &params);
}
bool ADynamicObjectVolume::DoneSpawning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.DoneSpawning"));
    struct Params_DoneSpawning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoneSpawning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADynamicObjectVolume::ClearStayInVolumesFromAliveActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearStayInVolumesFromAliveActors"));
    struct Params_ClearStayInVolumesFromAliveActors {
    }; // Size: 0x0
    Params_ClearStayInVolumesFromAliveActors params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearPerceiveVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearPerceiveVolumes"));
    struct Params_ClearPerceiveVolumes {
    }; // Size: 0x0
    Params_ClearPerceiveVolumes params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddTargetExcludeVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddTargetExcludeVolume"));
    struct Params_AddTargetExcludeVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddTargetExcludeVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearKillVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearKillVolumes"));
    struct Params_ClearKillVolumes {
    }; // Size: 0x0
    Params_ClearKillVolumes params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddTeamShareVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddTeamShareVolume"));
    struct Params_AddTeamShareVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddTeamShareVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::ClearForcePerceiveVolumes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.ClearForcePerceiveVolumes"));
    struct Params_ClearForcePerceiveVolumes {
    }; // Size: 0x0
    Params_ClearForcePerceiveVolumes params{};
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AttachEncompassingSpawners(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AttachEncompassingSpawners"));
    struct Params_AttachEncompassingSpawners {
        FString ObjectName; // 0x0
    }; // Size: 0x10
    Params_AttachEncompassingSpawners params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddStayInVolumeToAliveActors(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddStayInVolumeToAliveActors"));
    struct Params_AddStayInVolumeToAliveActors {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddStayInVolumeToAliveActors params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
void ADynamicObjectVolume::AddStayInVolume(APerceptionPointBox* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectVolume.AddStayInVolume"));
    struct Params_AddStayInVolume {
        APerceptionPointBox* InVolume; // 0x0
    }; // Size: 0x8
    Params_AddStayInVolume params{};
    params.InVolume = (APerceptionPointBox*)InVolume;
    ProcessEvent(func, &params);
}
