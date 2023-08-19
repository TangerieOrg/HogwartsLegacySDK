#include "AActor.hpp"
#include "EComponentCreationMethod.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETickingGroup.hpp"
#include "FActorComponentTickFunction.hpp"
#include "FSimpleMemberReference.hpp"
#include "UActorComponent.hpp"
#include "UAssetUserData.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UActorComponent::OnRep_IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.OnRep_IsActive"));
    struct Params_OnRep_IsActive {
    }; // Size: 0x0
    Params_OnRep_IsActive params{};
    ProcessEvent(func, &params);
}
void UActorComponent::SetComponentTickEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetComponentTickEnabled"));
    struct Params_SetComponentTickEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetComponentTickEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
UActorComponent* UActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ActorComponent");
    return (UActorComponent*)res;
}
void UActorComponent::K2_DestroyComponent(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.K2_DestroyComponent"));
    struct Params_K2_DestroyComponent {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_K2_DestroyComponent params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
void UActorComponent::SetComponentTickInterval(float TickInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetComponentTickInterval"));
    struct Params_SetComponentTickInterval {
        float TickInterval; // 0x0
    }; // Size: 0x4
    Params_SetComponentTickInterval params{};
    params.TickInterval = (float)TickInterval;
    ProcessEvent(func, &params);
}
void UActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetTickableWhenPaused"));
    struct Params_SetTickableWhenPaused {
        bool bTickableWhenPaused; // 0x0
    }; // Size: 0x1
    Params_SetTickableWhenPaused params{};
    params.bTickableWhenPaused = (bool)bTickableWhenPaused;
    ProcessEvent(func, &params);
}
void UActorComponent::ToggleActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.ToggleActive"));
    struct Params_ToggleActive {
    }; // Size: 0x0
    Params_ToggleActive params{};
    ProcessEvent(func, &params);
}
void UActorComponent::SetTickGroup(ETickingGroup NewTickGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetTickGroup"));
    struct Params_SetTickGroup {
        ETickingGroup NewTickGroup; // 0x0
    }; // Size: 0x1
    Params_SetTickGroup params{};
    params.NewTickGroup = (ETickingGroup)NewTickGroup;
    ProcessEvent(func, &params);
}
void UActorComponent::SetIsReplicated(bool ShouldReplicate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetIsReplicated"));
    struct Params_SetIsReplicated {
        bool ShouldReplicate; // 0x0
    }; // Size: 0x1
    Params_SetIsReplicated params{};
    params.ShouldReplicate = (bool)ShouldReplicate;
    ProcessEvent(func, &params);
}
void UActorComponent::SetComponentTickIntervalAndCooldown(float TickInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetComponentTickIntervalAndCooldown"));
    struct Params_SetComponentTickIntervalAndCooldown {
        float TickInterval; // 0x0
    }; // Size: 0x4
    Params_SetComponentTickIntervalAndCooldown params{};
    params.TickInterval = (float)TickInterval;
    ProcessEvent(func, &params);
}
void UActorComponent::SetAutoActivate(bool bNewAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetAutoActivate"));
    struct Params_SetAutoActivate {
        bool bNewAutoActivate; // 0x0
    }; // Size: 0x1
    Params_SetAutoActivate params{};
    params.bNewAutoActivate = (bool)bNewAutoActivate;
    ProcessEvent(func, &params);
}
void UActorComponent::SetActive(bool bNewActive, bool bReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.SetActive"));
    struct Params_SetActive {
        bool bNewActive; // 0x0
        bool bReset; // 0x1
    }; // Size: 0x2
    Params_SetActive params{};
    params.bNewActive = (bool)bNewActive;
    params.bReset = (bool)bReset;
    ProcessEvent(func, &params);
}
void UActorComponent::RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.RemoveTickPrerequisiteComponent"));
    struct Params_RemoveTickPrerequisiteComponent {
        UActorComponent* PrerequisiteComponent; // 0x0
    }; // Size: 0x8
    Params_RemoveTickPrerequisiteComponent params{};
    params.PrerequisiteComponent = (UActorComponent*)PrerequisiteComponent;
    ProcessEvent(func, &params);
}
void UActorComponent::RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.RemoveTickPrerequisiteActor"));
    struct Params_RemoveTickPrerequisiteActor {
        AActor* PrerequisiteActor; // 0x0
    }; // Size: 0x8
    Params_RemoveTickPrerequisiteActor params{};
    params.PrerequisiteActor = (AActor*)PrerequisiteActor;
    ProcessEvent(func, &params);
}
void UActorComponent::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UActorComponent::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void UActorComponent::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void UActorComponent::AddTickPrerequisiteActor(AActor* PrerequisiteActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.AddTickPrerequisiteActor"));
    struct Params_AddTickPrerequisiteActor {
        AActor* PrerequisiteActor; // 0x0
    }; // Size: 0x8
    Params_AddTickPrerequisiteActor params{};
    params.PrerequisiteActor = (AActor*)PrerequisiteActor;
    ProcessEvent(func, &params);
}
bool UActorComponent::IsComponentTickEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.IsComponentTickEnabled"));
    struct Params_IsComponentTickEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsComponentTickEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActorComponent::IsBeingDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.IsBeingDestroyed"));
    struct Params_IsBeingDestroyed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBeingDestroyed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActorComponent::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UActorComponent::GetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.GetOwner"));
    struct Params_GetOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
float UActorComponent::GetComponentTickInterval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.GetComponentTickInterval"));
    struct Params_GetComponentTickInterval {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetComponentTickInterval params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UActorComponent::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
bool UActorComponent::ComponentHasTag(FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.ComponentHasTag"));
    struct Params_ComponentHasTag {
        FName Tag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ComponentHasTag params{};
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActorComponent::AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.AddTickPrerequisiteComponent"));
    struct Params_AddTickPrerequisiteComponent {
        UActorComponent* PrerequisiteComponent; // 0x0
    }; // Size: 0x8
    Params_AddTickPrerequisiteComponent params{};
    params.PrerequisiteComponent = (UActorComponent*)PrerequisiteComponent;
    ProcessEvent(func, &params);
}
void UActorComponent::Activate(bool bReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ActorComponent.Activate"));
    struct Params_Activate {
        bool bReset; // 0x0
    }; // Size: 0x1
    Params_Activate params{};
    params.bReset = (bool)bReset;
    ProcessEvent(func, &params);
}
