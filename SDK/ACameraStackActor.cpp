#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "FCameraInputMappings.hpp"
#include "FCameraStackActorBehaviorTreePair.hpp"
#include "FCameraStackData.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBehaviorTree.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorCore.hpp"
#include "UCameraStackCineComponent.hpp"
#include "UCameraStackInput.hpp"
#include "UCameraStackTarget.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "UObject.hpp"
FTransform ACameraStackActor::GetUnblendedCameraViewTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetUnblendedCameraViewTransform"));
    struct Params_GetUnblendedCameraViewTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetUnblendedCameraViewTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
ACameraStackActor* ACameraStackActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackActor");
    return (ACameraStackActor*)res;
}
void ACameraStackActor::SetNamedSecondaryTargetActor(FName InName, AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.SetNamedSecondaryTargetActor"));
    struct Params_SetNamedSecondaryTargetActor {
        FName InName; // 0x0
        AActor* InActor; // 0x8
    }; // Size: 0x10
    Params_SetNamedSecondaryTargetActor params{};
    params.InName = (FName)InName;
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
AActor* ACameraStackActor::GetNamedSecondaryTargetActor(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetNamedSecondaryTargetActor"));
    struct Params_GetNamedSecondaryTargetActor {
        FName InName; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNamedSecondaryTargetActor params{};
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool ACameraStackActor::IsCameraContextSet(FName InContextName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.IsCameraContextSet"));
    struct Params_IsCameraContextSet {
        FName InContextName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCameraContextSet params{};
    params.InContextName = (FName)InContextName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACameraStackActor::ResetRotationToTarget(float InBlendDuration, FRotator& InDesiredDelta, bool bInResetYaw, bool bInResetPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.ResetRotationToTarget"));
    struct Params_ResetRotationToTarget {
        float InBlendDuration; // 0x0
        FRotator InDesiredDelta; // 0x4
        bool bInResetYaw; // 0x10
        bool bInResetPitch; // 0x11
    }; // Size: 0x12
    Params_ResetRotationToTarget params{};
    params.InBlendDuration = (float)InBlendDuration;
    params.InDesiredDelta = (FRotator)InDesiredDelta;
    params.bInResetYaw = (bool)bInResetYaw;
    params.bInResetPitch = (bool)bInResetPitch;
    ProcessEvent(func, &params);
    InDesiredDelta = params.InDesiredDelta;
}
void ACameraStackActor::SetCameraContext(FName InContextName, bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.SetCameraContext"));
    struct Params_SetCameraContext {
        FName InContextName; // 0x0
        bool bSet; // 0x8
    }; // Size: 0x9
    Params_SetCameraContext params{};
    params.InContextName = (FName)InContextName;
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
UCameraStackTarget* ACameraStackActor::GetTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetTarget"));
    struct Params_GetTarget {
        UCameraStackTarget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTarget params{};
    ProcessEvent(func, &params);
    return (UCameraStackTarget*)params.ReturnValue;
}
UCameraStackInput* ACameraStackActor::GetInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetInput"));
    struct Params_GetInput {
        UCameraStackInput* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInput params{};
    ProcessEvent(func, &params);
    return (UCameraStackInput*)params.ReturnValue;
}
FTransform ACameraStackActor::GetCameraViewTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetCameraViewTransform"));
    struct Params_GetCameraViewTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetCameraViewTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
UCameraStack* ACameraStackActor::GetBehaviors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetBehaviors"));
    struct Params_GetBehaviors {
        UCameraStack* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBehaviors params{};
    ProcessEvent(func, &params);
    return (UCameraStack*)params.ReturnValue;
}
FRotator ACameraStackActor::GetArmRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.GetArmRotation"));
    struct Params_GetArmRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetArmRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void ACameraStackActor::ForceSetArmRotationTowardsLocation(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.ForceSetArmRotationTowardsLocation"));
    struct Params_ForceSetArmRotationTowardsLocation {
        FVector InLocation; // 0x0
    }; // Size: 0xc
    Params_ForceSetArmRotationTowardsLocation params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
}
void ACameraStackActor::ForceSetArmRotation(FRotator InRotation, bool bUseDefaultPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.ForceSetArmRotation"));
    struct Params_ForceSetArmRotation {
        FRotator InRotation; // 0x0
        bool bUseDefaultPitch; // 0xc
    }; // Size: 0xd
    Params_ForceSetArmRotation params{};
    params.InRotation = (FRotator)InRotation;
    params.bUseDefaultPitch = (bool)bUseDefaultPitch;
    ProcessEvent(func, &params);
}
void ACameraStackActor::ForceCameraReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.ForceCameraReset"));
    struct Params_ForceCameraReset {
    }; // Size: 0x0
    Params_ForceCameraReset params{};
    ProcessEvent(func, &params);
}
UCameraStackBehavior* ACameraStackActor::CreateNonCoreBehavior(UClass* BehaviorClass, UObject* Template) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.CreateNonCoreBehavior"));
    struct Params_CreateNonCoreBehavior {
        UClass* BehaviorClass; // 0x0
        UObject* Template; // 0x8
        UCameraStackBehavior* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateNonCoreBehavior params{};
    params.BehaviorClass = (UClass*)BehaviorClass;
    params.Template = (UObject*)Template;
    ProcessEvent(func, &params);
    return (UCameraStackBehavior*)params.ReturnValue;
}
UCameraStackBehaviorCore* ACameraStackActor::CreateCoreBehavior(UClass* BehaviorClass, UObject* Template) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.CreateCoreBehavior"));
    struct Params_CreateCoreBehavior {
        UClass* BehaviorClass; // 0x0
        UObject* Template; // 0x8
        UCameraStackBehaviorCore* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateCoreBehavior params{};
    params.BehaviorClass = (UClass*)BehaviorClass;
    params.Template = (UObject*)Template;
    ProcessEvent(func, &params);
    return (UCameraStackBehaviorCore*)params.ReturnValue;
}
void ACameraStackActor::ClearCameraContext(FName InContextName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackActor.ClearCameraContext"));
    struct Params_ClearCameraContext {
        FName InContextName; // 0x0
    }; // Size: 0x8
    Params_ClearCameraContext params{};
    params.InContextName = (FName)InContextName;
    ProcessEvent(func, &params);
}
