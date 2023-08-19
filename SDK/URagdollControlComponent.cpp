#include "AActor.hpp"
#include "EImpactReactionStrength.hpp"
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "FRagdollControlPostAnimationTickFunction.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "URagdollBehaviorComponent.hpp"
#include "URagdollBehaviorConfigAsset.hpp"
#include "URagdollControlComponent.hpp"
#include "URagdollControlConfig.hpp"
#include "USkeletalMeshComponent.hpp"
void URagdollControlComponent::SetOwnerIsDead() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetOwnerIsDead"));
    struct Params_SetOwnerIsDead {
    }; // Size: 0x0
    Params_SetOwnerIsDead params{};
    ProcessEvent(func, &params);
}
void URagdollControlComponent::SetPoseDrivingMode(ERagdollPoseDrivingMode InPoseDrivingMode, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetPoseDrivingMode"));
    struct Params_SetPoseDrivingMode {
        ERagdollPoseDrivingMode InPoseDrivingMode; // 0x0
        char pad_1[0x3];
        float InBlendDuration; // 0x4
    }; // Size: 0x8
    Params_SetPoseDrivingMode params{};
    params.InPoseDrivingMode = (ERagdollPoseDrivingMode)InPoseDrivingMode;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
bool URagdollControlComponent::CanGetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.CanGetup"));
    struct Params_CanGetup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanGetup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
URagdollControlComponent* URagdollControlComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollControlComponent");
    return (URagdollControlComponent*)res;
}
void URagdollControlComponent::DeepFreezeWithActor(AActor* InActor, FName InCollisionProfile) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.DeepFreezeWithActor"));
    struct Params_DeepFreezeWithActor {
        AActor* InActor; // 0x0
        FName InCollisionProfile; // 0x8
    }; // Size: 0x10
    Params_DeepFreezeWithActor params{};
    params.InActor = (AActor*)InActor;
    params.InCollisionProfile = (FName)InCollisionProfile;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetSkeletalMeshComponent"));
    struct Params_SetSkeletalMeshComponent {
        USkeletalMeshComponent* InSkeletalMeshComponent; // 0x0
    }; // Size: 0x8
    Params_SetSkeletalMeshComponent params{};
    params.InSkeletalMeshComponent = (USkeletalMeshComponent*)InSkeletalMeshComponent;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::StartReaction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.StartReaction"));
    struct Params_StartReaction {
    }; // Size: 0x0
    Params_StartReaction params{};
    ProcessEvent(func, &params);
}
void URagdollControlComponent::ShowImpactReaction(EImpactReactionStrength InReactionStrength, FVector& InWorldLocation, FVector& InWorldDirection, float InWorldImpactStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.ShowImpactReaction"));
    struct Params_ShowImpactReaction {
        EImpactReactionStrength InReactionStrength; // 0x0
        char pad_1[0x3];
        FVector InWorldLocation; // 0x4
        FVector InWorldDirection; // 0x10
        float InWorldImpactStrength; // 0x1c
    }; // Size: 0x20
    Params_ShowImpactReaction params{};
    params.InReactionStrength = (EImpactReactionStrength)InReactionStrength;
    params.InWorldLocation = (FVector)InWorldLocation;
    params.InWorldDirection = (FVector)InWorldDirection;
    params.InWorldImpactStrength = (float)InWorldImpactStrength;
    ProcessEvent(func, &params);
    InWorldLocation = params.InWorldLocation;
    InWorldDirection = params.InWorldDirection;
}
bool URagdollControlComponent::IsBakedToRigidbody() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.IsBakedToRigidbody"));
    struct Params_IsBakedToRigidbody {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBakedToRigidbody params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void URagdollControlComponent::StartImpactReaction(EImpactReactionStrength InReactionStrength, FVector& InWorldLocation, FVector& InWorldDirection, float InWorldImpactStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.StartImpactReaction"));
    struct Params_StartImpactReaction {
        EImpactReactionStrength InReactionStrength; // 0x0
        char pad_1[0x3];
        FVector InWorldLocation; // 0x4
        FVector InWorldDirection; // 0x10
        float InWorldImpactStrength; // 0x1c
    }; // Size: 0x20
    Params_StartImpactReaction params{};
    params.InReactionStrength = (EImpactReactionStrength)InReactionStrength;
    params.InWorldLocation = (FVector)InWorldLocation;
    params.InWorldDirection = (FVector)InWorldDirection;
    params.InWorldImpactStrength = (float)InWorldImpactStrength;
    ProcessEvent(func, &params);
    InWorldDirection = params.InWorldDirection;
    InWorldLocation = params.InWorldLocation;
}
void URagdollControlComponent::SetOwnerResurrected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetOwnerResurrected"));
    struct Params_SetOwnerResurrected {
    }; // Size: 0x0
    Params_SetOwnerResurrected params{};
    ProcessEvent(func, &params);
}
bool URagdollControlComponent::HasValidSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.HasValidSetup"));
    struct Params_HasValidSetup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidSetup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void URagdollControlComponent::SetInWater(bool bInWater) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetInWater"));
    struct Params_SetInWater {
        bool bInWater; // 0x0
    }; // Size: 0x1
    Params_SetInWater params{};
    params.bInWater = (bool)bInWater;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::SetCOMDrivingModes(ERagdollCOMLocationDrivingMode InLocationDrivingMode, ERagdollCOMRotationDrivingMode InRotationDrivingMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetCOMDrivingModes"));
    struct Params_SetCOMDrivingModes {
        ERagdollCOMLocationDrivingMode InLocationDrivingMode; // 0x0
        ERagdollCOMRotationDrivingMode InRotationDrivingMode; // 0x1
    }; // Size: 0x2
    Params_SetCOMDrivingModes params{};
    params.InLocationDrivingMode = (ERagdollCOMLocationDrivingMode)InLocationDrivingMode;
    params.InRotationDrivingMode = (ERagdollCOMRotationDrivingMode)InRotationDrivingMode;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::SetBodyConstraintContext(FName InContextName, bool bInEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.SetBodyConstraintContext"));
    struct Params_SetBodyConstraintContext {
        FName InContextName; // 0x0
        bool bInEnable; // 0x8
    }; // Size: 0x9
    Params_SetBodyConstraintContext params{};
    params.InContextName = (FName)InContextName;
    params.bInEnable = (bool)bInEnable;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::RemoveBakedRigidbody() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.RemoveBakedRigidbody"));
    struct Params_RemoveBakedRigidbody {
    }; // Size: 0x0
    Params_RemoveBakedRigidbody params{};
    ProcessEvent(func, &params);
}
bool URagdollControlComponent::IsFullRagdoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.IsFullRagdoll"));
    struct Params_IsFullRagdoll {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFullRagdoll params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void URagdollControlComponent::ForcePopOutOfRagdollImmediately() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.ForcePopOutOfRagdollImmediately"));
    struct Params_ForcePopOutOfRagdollImmediately {
    }; // Size: 0x0
    Params_ForcePopOutOfRagdollImmediately params{};
    ProcessEvent(func, &params);
}
void URagdollControlComponent::DisallowBlendingOutOfRagdollUntilForced() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.DisallowBlendingOutOfRagdollUntilForced"));
    struct Params_DisallowBlendingOutOfRagdollUntilForced {
    }; // Size: 0x0
    Params_DisallowBlendingOutOfRagdollUntilForced params{};
    ProcessEvent(func, &params);
}
void URagdollControlComponent::DisableCcd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.DisableCcd"));
    struct Params_DisableCcd {
    }; // Size: 0x0
    Params_DisableCcd params{};
    ProcessEvent(func, &params);
}
void URagdollControlComponent::BlendBack(bool bInStationaryCapsuleWhileBlending, float InBlendDurationOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.BlendBack"));
    struct Params_BlendBack {
        bool bInStationaryCapsuleWhileBlending; // 0x0
        char pad_1[0x3];
        float InBlendDurationOverride; // 0x4
    }; // Size: 0x8
    Params_BlendBack params{};
    params.bInStationaryCapsuleWhileBlending = (bool)bInStationaryCapsuleWhileBlending;
    params.InBlendDurationOverride = (float)InBlendDurationOverride;
    ProcessEvent(func, &params);
}
void URagdollControlComponent::AttachBakedRigidbody() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.RagdollControlComponent.AttachBakedRigidbody"));
    struct Params_AttachBakedRigidbody {
    }; // Size: 0x0
    Params_AttachBakedRigidbody params{};
    ProcessEvent(func, &params);
}
