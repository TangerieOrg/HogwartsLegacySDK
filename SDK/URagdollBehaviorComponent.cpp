#include "AActor.hpp"
#include "FAudioLayerBehaviorState.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "URagdollBehavior.hpp"
#include "URagdollBehaviorComponent.hpp"
#include "URagdollBehaviorConfigAsset.hpp"
#include "URagdollControlComponent.hpp"
#include "URagdollRecoveryAssistBehavior.hpp"
#include "USkeletalMeshComponent.hpp"
bool URagdollBehaviorComponent::HasValidSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.HasValidSetup"));
    struct Params_HasValidSetup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidSetup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
URagdollBehaviorComponent* URagdollBehaviorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollBehaviorComponent");
    return (URagdollBehaviorComponent*)res;
}
void URagdollBehaviorComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.SetSkeletalMeshComponent"));
    struct Params_SetSkeletalMeshComponent {
        USkeletalMeshComponent* InSkeletalMeshComponent; // 0x0
    }; // Size: 0x8
    Params_SetSkeletalMeshComponent params{};
    params.InSkeletalMeshComponent = (USkeletalMeshComponent*)InSkeletalMeshComponent;
    ProcessEvent(func, &params);
}
void URagdollBehaviorComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
bool URagdollBehaviorComponent::IsSensoryStateStatisfied(FName targetSensoryState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.IsSensoryStateStatisfied"));
    struct Params_IsSensoryStateStatisfied {
        FName targetSensoryState; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSensoryStateStatisfied params{};
    params.targetSensoryState = (FName)targetSensoryState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool URagdollBehaviorComponent::IsPoseStateStatisfied(FName targetPose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.IsPoseStateStatisfied"));
    struct Params_IsPoseStateStatisfied {
        FName targetPose; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPoseStateStatisfied params{};
    params.targetPose = (FName)targetPose;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void URagdollBehaviorComponent::DoAudioBehaviorChangeEvent(FAudioLayerBehaviorState& rLayerState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.DoAudioBehaviorChangeEvent"));
    struct Params_DoAudioBehaviorChangeEvent {
        FAudioLayerBehaviorState rLayerState; // 0x0
    }; // Size: 0x18
    Params_DoAudioBehaviorChangeEvent params{};
    params.rLayerState = (FAudioLayerBehaviorState)rLayerState;
    ProcessEvent(func, &params);
    rLayerState = params.rLayerState;
}
bool URagdollBehaviorComponent::IsGetupAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollBehaviorComponent.IsGetupAllowed"));
    struct Params_IsGetupAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGetupAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
