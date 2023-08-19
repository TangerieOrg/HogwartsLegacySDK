#include "ABase_Character.hpp"
#include "ANonCombat_Character.hpp"
#include "FGameplayTag.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNPC_ReactionComponent.hpp"
#include "UObject.hpp"
#include "USocialAgentPathFollowerComponent.hpp"
bool ANonCombat_Character::IsFrozen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.IsFrozen"));
    struct Params_IsFrozen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFrozen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ANonCombat_Character* ANonCombat_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NonCombat_Character");
    return (ANonCombat_Character*)res;
}
void ANonCombat_Character::UnregisterForInteractionSense(UObject* InObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.UnregisterForInteractionSense"));
    struct Params_UnregisterForInteractionSense {
        UObject* InObject; // 0x0
    }; // Size: 0x8
    Params_UnregisterForInteractionSense params{};
    params.InObject = (UObject*)InObject;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::StopAndIdle(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.StopAndIdle"));
    struct Params_StopAndIdle {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_StopAndIdle params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::Suspend(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.Suspend"));
    struct Params_Suspend {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_Suspend params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::StopCustomAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.StopCustomAbility"));
    struct Params_StopCustomAbility {
    }; // Size: 0x0
    Params_StopCustomAbility params{};
    ProcessEvent(func, &params);
}
void ANonCombat_Character::OnStationOnFinishedExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.OnStationOnFinishedExit"));
    struct Params_OnStationOnFinishedExit {
    }; // Size: 0x0
    Params_OnStationOnFinishedExit params{};
    ProcessEvent(func, &params);
}
void ANonCombat_Character::Resume(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.Resume"));
    struct Params_Resume {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_Resume params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::StartChildSpawnFX(FTransform inSpawnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.StartChildSpawnFX"));
    struct Params_StartChildSpawnFX {
        FTransform inSpawnLoc; // 0x0
    }; // Size: 0x30
    Params_StartChildSpawnFX params{};
    params.inSpawnLoc = (FTransform)inSpawnLoc;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::Release(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.Release"));
    struct Params_Release {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_Release params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::RegisterForInteractionSense(UObject* InObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.RegisterForInteractionSense"));
    struct Params_RegisterForInteractionSense {
        UObject* InObject; // 0x0
    }; // Size: 0x8
    Params_RegisterForInteractionSense params{};
    params.InObject = (UObject*)InObject;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::PlayCustomAbility(UClass* InAbility, bool bPreventReactions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.PlayCustomAbility"));
    struct Params_PlayCustomAbility {
        UClass* InAbility; // 0x0
        bool bPreventReactions; // 0x8
    }; // Size: 0x9
    Params_PlayCustomAbility params{};
    params.InAbility = (UClass*)InAbility;
    params.bPreventReactions = (bool)bPreventReactions;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::OnStationOnFinishedEnter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.OnStationOnFinishedEnter"));
    struct Params_OnStationOnFinishedEnter {
    }; // Size: 0x0
    Params_OnStationOnFinishedEnter params{};
    ProcessEvent(func, &params);
}
void ANonCombat_Character::OnReactionQueued(UAblReactionData* InReactionData, UAblReactionComponent* InReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.OnReactionQueued"));
    struct Params_OnReactionQueued {
        UAblReactionData* InReactionData; // 0x0
        UAblReactionComponent* InReactionComponent; // 0x8
    }; // Size: 0x10
    Params_OnReactionQueued params{};
    params.InReactionData = (UAblReactionData*)InReactionData;
    params.InReactionComponent = (UAblReactionComponent*)InReactionComponent;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::OnReactionEnd(UAblReactionData* InReactionData, UAblReactionComponent* InReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.OnReactionEnd"));
    struct Params_OnReactionEnd {
        UAblReactionData* InReactionData; // 0x0
        UAblReactionComponent* InReactionComponent; // 0x8
    }; // Size: 0x10
    Params_OnReactionEnd params{};
    params.InReactionData = (UAblReactionData*)InReactionData;
    params.InReactionComponent = (UAblReactionComponent*)InReactionComponent;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::OnChildSpawnFX(FTransform inSpawnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.OnChildSpawnFX"));
    struct Params_OnChildSpawnFX {
        FTransform inSpawnLoc; // 0x0
    }; // Size: 0x30
    Params_OnChildSpawnFX params{};
    params.inSpawnLoc = (FTransform)inSpawnLoc;
    ProcessEvent(func, &params);
}
bool ANonCombat_Character::IsSuspended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.IsSuspended"));
    struct Params_IsSuspended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSuspended params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANonCombat_Character::IsScheduledEntity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.IsScheduledEntity"));
    struct Params_IsScheduledEntity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsScheduledEntity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANonCombat_Character::IsReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.IsReleased"));
    struct Params_IsReleased {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReleased params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANonCombat_Character::IsAlive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.IsAlive"));
    struct Params_IsAlive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAlive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANonCombat_Character::HandleRagdollImpact(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.HandleRagdollImpact"));
    struct Params_HandleRagdollImpact {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_HandleRagdollImpact params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
UCapsuleComponent* ANonCombat_Character::GetNpcCapsuleComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.GetNpcCapsuleComponent"));
    struct Params_GetNpcCapsuleComponent {
        UCapsuleComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNpcCapsuleComponent params{};
    ProcessEvent(func, &params);
    return (UCapsuleComponent*)params.ReturnValue;
}
FVector ANonCombat_Character::GetImpactLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.GetImpactLocation"));
    struct Params_GetImpactLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImpactLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector ANonCombat_Character::GetImpactDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.GetImpactDirection"));
    struct Params_GetImpactDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImpactDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ANonCombat_Character::Freeze(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.Freeze"));
    struct Params_Freeze {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_Freeze params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::ForceScheduledEntityState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.ForceScheduledEntityState"));
    struct Params_ForceScheduledEntityState {
    }; // Size: 0x0
    Params_ForceScheduledEntityState params{};
    ProcessEvent(func, &params);
}
void ANonCombat_Character::ForceProtego(bool inProtegoOnOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.ForceProtego"));
    struct Params_ForceProtego {
        bool inProtegoOnOff; // 0x0
    }; // Size: 0x1
    Params_ForceProtego params{};
    params.inProtegoOnOff = (bool)inProtegoOnOff;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::EnableCallout(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.EnableCallout"));
    struct Params_EnableCallout {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_EnableCallout params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::DisableCallout(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.DisableCallout"));
    struct Params_DisableCallout {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_DisableCallout params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ANonCombat_Character::ApplySpawnFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.ApplySpawnFX"));
    struct Params_ApplySpawnFX {
    }; // Size: 0x0
    Params_ApplySpawnFX params{};
    ProcessEvent(func, &params);
}
void ANonCombat_Character::ApplyReplicaFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NonCombat_Character.ApplyReplicaFX"));
    struct Params_ApplyReplicaFX {
    }; // Size: 0x0
    Params_ApplyReplicaFX params{};
    ProcessEvent(func, &params);
}
