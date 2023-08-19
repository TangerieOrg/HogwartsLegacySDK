#include "AActor.hpp"
#include "ACreaturePerceptionVolume.hpp"
#include "ACreatureTetherVolume.hpp"
#include "ACreature_Character.hpp"
#include "ACreature_Controller.hpp"
#include "APathNode.hpp"
#include "ECreatureAIState.hpp"
#include "ECreatureFleeFlyingOption.hpp"
#include "ECreatureIdleOverrideState.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreaturePathEndMode.hpp"
#include "ECreatureStance.hpp"
#include "ECreatureStoppingMode.hpp"
#include "FCreatureLookAtBehavior.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMunitionImpactData.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAIPerceptionComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UCreatureSpawnSlotComponent.hpp"
#include "UCreature_AIComponent.hpp"
#include "UCreature_NurtureComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNPC_Component.hpp"
#include "UObject.hpp"
UCreature_AIComponent* UCreature_AIComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_AIComponent");
    return (UCreature_AIComponent*)res;
}
void UCreature_AIComponent::TryEnterScheduledEntityMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.TryEnterScheduledEntityMode"));
    struct Params_TryEnterScheduledEntityMode {
    }; // Size: 0x0
    Params_TryEnterScheduledEntityMode params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::TeamChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.TeamChanged"));
    struct Params_TeamChanged {
    }; // Size: 0x0
    Params_TeamChanged params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetToMovementSpeed(ECreatureMovementSpeed MovementSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetToMovementSpeed"));
    struct Params_SetToMovementSpeed {
        ECreatureMovementSpeed MovementSpeed; // 0x0
    }; // Size: 0x1
    Params_SetToMovementSpeed params{};
    params.MovementSpeed = (ECreatureMovementSpeed)MovementSpeed;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::DisableCreaturePerception(bool bForgetPreviousStimuli, bool bLoseAwareness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.DisableCreaturePerception"));
    struct Params_DisableCreaturePerception {
        bool bForgetPreviousStimuli; // 0x0
        bool bLoseAwareness; // 0x1
    }; // Size: 0x2
    Params_DisableCreaturePerception params{};
    params.bForgetPreviousStimuli = (bool)bForgetPreviousStimuli;
    params.bLoseAwareness = (bool)bLoseAwareness;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::StartFollowPathBehavior(APathNode* InPathNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.StartFollowPathBehavior"));
    struct Params_StartFollowPathBehavior {
        APathNode* InPathNode; // 0x0
    }; // Size: 0x8
    Params_StartFollowPathBehavior params{};
    params.InPathNode = (APathNode*)InPathNode;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetToWalkMovementSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetToWalkMovementSpeed"));
    struct Params_SetToWalkMovementSpeed {
    }; // Size: 0x0
    Params_SetToWalkMovementSpeed params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetInteractionTime(AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetInteractionTime"));
    struct Params_SetInteractionTime {
        AActor* InTargetActor; // 0x0
    }; // Size: 0x8
    Params_SetInteractionTime params{};
    params.InTargetActor = (AActor*)InTargetActor;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetToSprintMovementSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetToSprintMovementSpeed"));
    struct Params_SetToSprintMovementSpeed {
    }; // Size: 0x0
    Params_SetToSprintMovementSpeed params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetToMovementSpeedFloat(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetToMovementSpeedFloat"));
    struct Params_SetToMovementSpeedFloat {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_SetToMovementSpeedFloat params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetToJogMovementSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetToJogMovementSpeed"));
    struct Params_SetToJogMovementSpeed {
    }; // Size: 0x0
    Params_SetToJogMovementSpeed params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetIdleOverrideState(ECreatureIdleOverrideState InNewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetIdleOverrideState"));
    struct Params_SetIdleOverrideState {
        ECreatureIdleOverrideState InNewState; // 0x0
    }; // Size: 0x1
    Params_SetIdleOverrideState params{};
    params.InNewState = (ECreatureIdleOverrideState)InNewState;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetTetherVolume(ACreatureTetherVolume* InTetherVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetTetherVolume"));
    struct Params_SetTetherVolume {
        ACreatureTetherVolume* InTetherVolume; // 0x0
    }; // Size: 0x8
    Params_SetTetherVolume params{};
    params.InTetherVolume = (ACreatureTetherVolume*)InTetherVolume;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::EnableCreaturePerception() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.EnableCreaturePerception"));
    struct Params_EnableCreaturePerception {
    }; // Size: 0x0
    Params_EnableCreaturePerception params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::RemovePerceptionVolume(ACreaturePerceptionVolume* InPerceptionVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.RemovePerceptionVolume"));
    struct Params_RemovePerceptionVolume {
        ACreaturePerceptionVolume* InPerceptionVolume; // 0x0
    }; // Size: 0x8
    Params_RemovePerceptionVolume params{};
    params.InPerceptionVolume = (ACreaturePerceptionVolume*)InPerceptionVolume;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetStoppingMode(ECreatureStoppingMode StoppingMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetStoppingMode"));
    struct Params_SetStoppingMode {
        ECreatureStoppingMode StoppingMode; // 0x0
    }; // Size: 0x1
    Params_SetStoppingMode params{};
    params.StoppingMode = (ECreatureStoppingMode)StoppingMode;
    ProcessEvent(func, &params);
}
ECreatureMovementSpeed UCreature_AIComponent::GetBestSpeedToReachLocation(FVector InLocation, float InTimeToReach) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetBestSpeedToReachLocation"));
    struct Params_GetBestSpeedToReachLocation {
        FVector InLocation; // 0x0
        float InTimeToReach; // 0xc
        ECreatureMovementSpeed ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetBestSpeedToReachLocation params{};
    params.InLocation = (FVector)InLocation;
    params.InTimeToReach = (float)InTimeToReach;
    ProcessEvent(func, &params);
    return (ECreatureMovementSpeed)params.ReturnValue;
}
void UCreature_AIComponent::SetPathEndMode(ECreaturePathEndMode PathEndMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetPathEndMode"));
    struct Params_SetPathEndMode {
        ECreaturePathEndMode PathEndMode; // 0x0
    }; // Size: 0x1
    Params_SetPathEndMode params{};
    params.PathEndMode = (ECreaturePathEndMode)PathEndMode;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetFocusActorBlackboardState(AActor* FocusActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetFocusActorBlackboardState"));
    struct Params_SetFocusActorBlackboardState {
        AActor* FocusActor; // 0x0
    }; // Size: 0x8
    Params_SetFocusActorBlackboardState params{};
    params.FocusActor = (AActor*)FocusActor;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetDesiredCreatureStance(ECreatureStance InNewStance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetDesiredCreatureStance"));
    struct Params_SetDesiredCreatureStance {
        ECreatureStance InNewStance; // 0x0
    }; // Size: 0x1
    Params_SetDesiredCreatureStance params{};
    params.InNewStance = (ECreatureStance)InNewStance;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::SetAIState(ECreatureAIState InNewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.SetAIState"));
    struct Params_SetAIState {
        ECreatureAIState InNewState; // 0x0
    }; // Size: 0x1
    Params_SetAIState params{};
    params.InNewState = (ECreatureAIState)InNewState;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::AddPerceptionVolume(ACreaturePerceptionVolume* InPerceptionVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.AddPerceptionVolume"));
    struct Params_AddPerceptionVolume {
        ACreaturePerceptionVolume* InPerceptionVolume; // 0x0
    }; // Size: 0x8
    Params_AddPerceptionVolume params{};
    params.InPerceptionVolume = (ACreaturePerceptionVolume*)InPerceptionVolume;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::RandomizeApproachRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.RandomizeApproachRadius"));
    struct Params_RandomizeApproachRadius {
    }; // Size: 0x0
    Params_RandomizeApproachRadius params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::OnPerceptionUpdated(TArray<AActor*>& UpdatedActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.OnPerceptionUpdated"));
    struct Params_OnPerceptionUpdated {
        TArray<AActor*> UpdatedActors; // 0x0
    }; // Size: 0x10
    Params_OnPerceptionUpdated params{};
    params.UpdatedActors = (TArray<AActor*>)UpdatedActors;
    ProcessEvent(func, &params);
    UpdatedActors = params.UpdatedActors;
}
void UCreature_AIComponent::OnObjectStateChange(UObject* InCaller, uint8_t InInteractiveAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.OnObjectStateChange"));
    struct Params_OnObjectStateChange {
        UObject* InCaller; // 0x0
        uint8_t InInteractiveAction; // 0x8
    }; // Size: 0x9
    Params_OnObjectStateChange params{};
    params.InCaller = (UObject*)InCaller;
    params.InInteractiveAction = (uint8_t)InInteractiveAction;
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::OnMunitionImpactDamage(UObject* InCaller, FMunitionImpactData& InImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.OnMunitionImpactDamage"));
    struct Params_OnMunitionImpactDamage {
        UObject* InCaller; // 0x0
        FMunitionImpactData InImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionImpactDamage params{};
    params.InCaller = (UObject*)InCaller;
    params.InImpactData = (FMunitionImpactData)InImpactData;
    ProcessEvent(func, &params);
    InImpactData = params.InImpactData;
}
void UCreature_AIComponent::OnCreatureDied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.OnCreatureDied"));
    struct Params_OnCreatureDied {
    }; // Size: 0x0
    Params_OnCreatureDied params{};
    ProcessEvent(func, &params);
}
void UCreature_AIComponent::OnAIStateComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.OnAIStateComplete"));
    struct Params_OnAIStateComplete {
    }; // Size: 0x0
    Params_OnAIStateComplete params{};
    ProcessEvent(func, &params);
}
ACreatureTetherVolume* UCreature_AIComponent::GetTetherVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetTetherVolume"));
    struct Params_GetTetherVolume {
        ACreatureTetherVolume* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTetherVolume params{};
    ProcessEvent(func, &params);
    return (ACreatureTetherVolume*)params.ReturnValue;
}
UAIPerceptionComponent* UCreature_AIComponent::GetPerceptionComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetPerceptionComponent"));
    struct Params_GetPerceptionComponent {
        UAIPerceptionComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPerceptionComponent params{};
    ProcessEvent(func, &params);
    return (UAIPerceptionComponent*)params.ReturnValue;
}
ECreatureAIState UCreature_AIComponent::GetAIState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetAIState"));
    struct Params_GetAIState {
        ECreatureAIState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAIState params{};
    ProcessEvent(func, &params);
    return (ECreatureAIState)params.ReturnValue;
}
ECreaturePathEndMode UCreature_AIComponent::GetPathEndMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetPathEndMode"));
    struct Params_GetPathEndMode {
        ECreaturePathEndMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPathEndMode params{};
    ProcessEvent(func, &params);
    return (ECreaturePathEndMode)params.ReturnValue;
}
ECreatureIdleOverrideState UCreature_AIComponent::GetIdleOverrideState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetIdleOverrideState"));
    struct Params_GetIdleOverrideState {
        ECreatureIdleOverrideState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIdleOverrideState params{};
    ProcessEvent(func, &params);
    return (ECreatureIdleOverrideState)params.ReturnValue;
}
UClass* UCreature_AIComponent::GetCustomAbilityClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetCustomAbilityClass"));
    struct Params_GetCustomAbilityClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCustomAbilityClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
float UCreature_AIComponent::GetCurrentApproachRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetCurrentApproachRadius"));
    struct Params_GetCurrentApproachRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentApproachRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UBlackboardComponent* UCreature_AIComponent::GetBlackboard() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.GetBlackboard"));
    struct Params_GetBlackboard {
        UBlackboardComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlackboard params{};
    ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
void UCreature_AIComponent::FindPettingBrushInitialAttachment(FGameplayTagContainer& InAnimationVariationTagContainer, FVector& OutRelativeLocation, FRotator& OutRotation, FVector& OutScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.FindPettingBrushInitialAttachment"));
    struct Params_FindPettingBrushInitialAttachment {
        FGameplayTagContainer InAnimationVariationTagContainer; // 0x0
        FVector OutRelativeLocation; // 0x20
        FRotator OutRotation; // 0x2c
        FVector OutScale; // 0x38
    }; // Size: 0x44
    Params_FindPettingBrushInitialAttachment params{};
    params.InAnimationVariationTagContainer = (FGameplayTagContainer)InAnimationVariationTagContainer;
    params.OutRelativeLocation = (FVector)OutRelativeLocation;
    params.OutRotation = (FRotator)OutRotation;
    params.OutScale = (FVector)OutScale;
    ProcessEvent(func, &params);
    InAnimationVariationTagContainer = params.InAnimationVariationTagContainer;
    OutRelativeLocation = params.OutRelativeLocation;
    OutRotation = params.OutRotation;
    OutScale = params.OutScale;
}
FTransform UCreature_AIComponent::FindPettingBrushAttachmentRelativeTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.FindPettingBrushAttachmentRelativeTransform"));
    struct Params_FindPettingBrushAttachmentRelativeTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_FindPettingBrushAttachmentRelativeTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
bool UCreature_AIComponent::ExecuteAbilityFromAsset(UInteractionArchitectAsset* InArchitectAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_AIComponent.ExecuteAbilityFromAsset"));
    struct Params_ExecuteAbilityFromAsset {
        UInteractionArchitectAsset* InArchitectAsset; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ExecuteAbilityFromAsset params{};
    params.InArchitectAsset = (UInteractionArchitectAsset*)InArchitectAsset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
