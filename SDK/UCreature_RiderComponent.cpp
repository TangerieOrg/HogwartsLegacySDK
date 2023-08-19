#include "ACreatureMountHandler.hpp"
#include "ACreature_Character.hpp"
#include "EMountMovementState.hpp"
#include "FGameplayTagContainer.hpp"
#include "FIKPoseFixupDefinition.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UAblReactionComponent.hpp"
#include "UAblReactionData.hpp"
#include "UActorComponent.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UClass.hpp"
#include "UCreature_MountComponent.hpp"
#include "UCreature_RiderComponent.hpp"
#include "UFunction.hpp"
UCreature_RiderComponent* UCreature_RiderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_RiderComponent");
    return (UCreature_RiderComponent*)res;
}
ACreature_Character* UCreature_RiderComponent::GetCreatureCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.GetCreatureCharacter"));
    struct Params_GetCreatureCharacter {
        ACreature_Character* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCreatureCharacter params{};
    ProcessEvent(func, &params);
    return (ACreature_Character*)params.ReturnValue;
}
void UCreature_RiderComponent::OnMountMovementStateChanged(UCreature_MountComponent* MountComponent, EMountMovementState PrevMovementState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.OnMountMovementStateChanged"));
    struct Params_OnMountMovementStateChanged {
        UCreature_MountComponent* MountComponent; // 0x0
        EMountMovementState PrevMovementState; // 0x8
    }; // Size: 0x9
    Params_OnMountMovementStateChanged params{};
    params.MountComponent = (UCreature_MountComponent*)MountComponent;
    params.PrevMovementState = (EMountMovementState)PrevMovementState;
    ProcessEvent(func, &params);
}
void UCreature_RiderComponent::OnCreatureReactionQueued(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.OnCreatureReactionQueued"));
    struct Params_OnCreatureReactionQueued {
        UAblReactionData* ReactionData; // 0x0
        UAblReactionComponent* ReactionComponent; // 0x8
    }; // Size: 0x10
    Params_OnCreatureReactionQueued params{};
    params.ReactionData = (UAblReactionData*)ReactionData;
    params.ReactionComponent = (UAblReactionComponent*)ReactionComponent;
    ProcessEvent(func, &params);
}
void UCreature_RiderComponent::InterruptDismount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.InterruptDismount"));
    struct Params_InterruptDismount {
    }; // Size: 0x0
    Params_InterruptDismount params{};
    ProcessEvent(func, &params);
}
ACreatureMountHandler* UCreature_RiderComponent::GetMountHandler() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.GetMountHandler"));
    struct Params_GetMountHandler {
        ACreatureMountHandler* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMountHandler params{};
    ProcessEvent(func, &params);
    return (ACreatureMountHandler*)params.ReturnValue;
}
void UCreature_RiderComponent::EnableHandIK() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.EnableHandIK"));
    struct Params_EnableHandIK {
    }; // Size: 0x0
    Params_EnableHandIK params{};
    ProcessEvent(func, &params);
}
void UCreature_RiderComponent::DisableHandIK() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.DisableHandIK"));
    struct Params_DisableHandIK {
    }; // Size: 0x0
    Params_DisableHandIK params{};
    ProcessEvent(func, &params);
}
void UCreature_RiderComponent::DeactivateRiderComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.DeactivateRiderComponent"));
    struct Params_DeactivateRiderComponent {
    }; // Size: 0x0
    Params_DeactivateRiderComponent params{};
    ProcessEvent(func, &params);
}
void UCreature_RiderComponent::ActivateRiderComponent(ACreatureMountHandler* InMountHandler, bool bEnableHandIK) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_RiderComponent.ActivateRiderComponent"));
    struct Params_ActivateRiderComponent {
        ACreatureMountHandler* InMountHandler; // 0x0
        bool bEnableHandIK; // 0x8
    }; // Size: 0x9
    Params_ActivateRiderComponent params{};
    params.InMountHandler = (ACreatureMountHandler*)InMountHandler;
    params.bEnableHandIK = (bool)bEnableHandIK;
    ProcessEvent(func, &params);
}
