#include "EBoneSpaces\Type.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPoseableMeshComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinnedMeshComponent.hpp"
void UPoseableMeshComponent::SetBoneScaleByName(FName BoneName, FVector InScale3D, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.SetBoneScaleByName"));
    struct Params_SetBoneScaleByName {
        FName BoneName; // 0x0
        FVector InScale3D; // 0x8
        EBoneSpaces::Type BoneSpace; // 0x14
    }; // Size: 0x15
    Params_SetBoneScaleByName params{};
    params.BoneName = (FName)BoneName;
    params.InScale3D = (FVector)InScale3D;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
}
UPoseableMeshComponent* UPoseableMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PoseableMeshComponent");
    return (UPoseableMeshComponent*)res;
}
void UPoseableMeshComponent::SetBoneRotationByName(FName BoneName, FRotator InRotation, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.SetBoneRotationByName"));
    struct Params_SetBoneRotationByName {
        FName BoneName; // 0x0
        FRotator InRotation; // 0x8
        EBoneSpaces::Type BoneSpace; // 0x14
    }; // Size: 0x15
    Params_SetBoneRotationByName params{};
    params.BoneName = (FName)BoneName;
    params.InRotation = (FRotator)InRotation;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
}
void UPoseableMeshComponent::SetBoneTransformByName(FName BoneName, FTransform& InTransform, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.SetBoneTransformByName"));
    struct Params_SetBoneTransformByName {
        FName BoneName; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        EBoneSpaces::Type BoneSpace; // 0x40
    }; // Size: 0x41
    Params_SetBoneTransformByName params{};
    params.BoneName = (FName)BoneName;
    params.InTransform = (FTransform)InTransform;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
}
void UPoseableMeshComponent::SetBoneLocationByName(FName BoneName, FVector InLocation, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.SetBoneLocationByName"));
    struct Params_SetBoneLocationByName {
        FName BoneName; // 0x0
        FVector InLocation; // 0x8
        EBoneSpaces::Type BoneSpace; // 0x14
    }; // Size: 0x15
    Params_SetBoneLocationByName params{};
    params.BoneName = (FName)BoneName;
    params.InLocation = (FVector)InLocation;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
}
void UPoseableMeshComponent::SetBoneSpaceTransformByName(FName BoneName, FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.SetBoneSpaceTransformByName"));
    struct Params_SetBoneSpaceTransformByName {
        FName BoneName; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
    }; // Size: 0x40
    Params_SetBoneSpaceTransformByName params{};
    params.BoneName = (FName)BoneName;
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
}
void UPoseableMeshComponent::ResetBoneTransformByName(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.ResetBoneTransformByName"));
    struct Params_ResetBoneTransformByName {
        FName BoneName; // 0x0
    }; // Size: 0x8
    Params_ResetBoneTransformByName params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
FTransform UPoseableMeshComponent::GetBoneTransformByName(FName BoneName, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.GetBoneTransformByName"));
    struct Params_GetBoneTransformByName {
        FName BoneName; // 0x0
        EBoneSpaces::Type BoneSpace; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetBoneTransformByName params{};
    params.BoneName = (FName)BoneName;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FTransform UPoseableMeshComponent::GetBoneSpaceTransformByName(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.GetBoneSpaceTransformByName"));
    struct Params_GetBoneSpaceTransformByName {
        FName BoneName; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetBoneSpaceTransformByName params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FVector UPoseableMeshComponent::GetBoneScaleByName(FName BoneName, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.GetBoneScaleByName"));
    struct Params_GetBoneScaleByName {
        FName BoneName; // 0x0
        EBoneSpaces::Type BoneSpace; // 0x8
        char pad_9[0x3];
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetBoneScaleByName params{};
    params.BoneName = (FName)BoneName;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UPoseableMeshComponent::GetBoneRotationByName(FName BoneName, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.GetBoneRotationByName"));
    struct Params_GetBoneRotationByName {
        FName BoneName; // 0x0
        EBoneSpaces::Type BoneSpace; // 0x8
        char pad_9[0x3];
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetBoneRotationByName params{};
    params.BoneName = (FName)BoneName;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UPoseableMeshComponent::GetBoneLocationByName(FName BoneName, EBoneSpaces::Type BoneSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.GetBoneLocationByName"));
    struct Params_GetBoneLocationByName {
        FName BoneName; // 0x0
        EBoneSpaces::Type BoneSpace; // 0x8
        char pad_9[0x3];
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetBoneLocationByName params{};
    params.BoneName = (FName)BoneName;
    params.BoneSpace = (EBoneSpaces::Type)BoneSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UPoseableMeshComponent::CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent"));
    struct Params_CopyPoseFromSkeletalComponent {
        USkeletalMeshComponent* InComponentToCopy; // 0x0
    }; // Size: 0x8
    Params_CopyPoseFromSkeletalComponent params{};
    params.InComponentToCopy = (USkeletalMeshComponent*)InComponentToCopy;
    ProcessEvent(func, &params);
}
