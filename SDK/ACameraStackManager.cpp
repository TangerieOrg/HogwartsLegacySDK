#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACameraStackManager.hpp"
#include "APlayerCameraManager.hpp"
#include "FCameraDefaultData.hpp"
#include "FCameraInputMappings.hpp"
#include "FCameraOptionMappings.hpp"
#include "FVector2D.hpp"
#include "UCameraAspectRatioWidget.hpp"
#include "UCameraPostProcessHandler.hpp"
#include "UCameraStackSettings.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMaterial.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UUserWidget.hpp"
void ACameraStackManager::RemoveFromCameraActorMap(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.RemoveFromCameraActorMap"));
    struct Params_RemoveFromCameraActorMap {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_RemoveFromCameraActorMap params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
ACameraStackActor* ACameraStackManager::SpawnCameraActorForTarget(AActor* InTargetActor, UCameraStackSettings* InStackSettings, UClass* InCameraActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.SpawnCameraActorForTarget"));
    struct Params_SpawnCameraActorForTarget {
        AActor* InTargetActor; // 0x0
        UCameraStackSettings* InStackSettings; // 0x8
        UClass* InCameraActorClass; // 0x10
        ACameraStackActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SpawnCameraActorForTarget params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InStackSettings = (UCameraStackSettings*)InStackSettings;
    params.InCameraActorClass = (UClass*)InCameraActorClass;
    ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
ACameraStackManager* ACameraStackManager::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackManager");
    return (ACameraStackManager*)res;
}
void ACameraStackManager::SwitchToCamera(AActor* NewCamera, bool bInOverrideBlendDuration, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.SwitchToCamera"));
    struct Params_SwitchToCamera {
        AActor* NewCamera; // 0x0
        bool bInOverrideBlendDuration; // 0x8
        char pad_9[0x3];
        float InBlendDuration; // 0xc
    }; // Size: 0x10
    Params_SwitchToCamera params{};
    params.NewCamera = (AActor*)NewCamera;
    params.bInOverrideBlendDuration = (bool)bInOverrideBlendDuration;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void ACameraStackManager::SwitchToActorsCameraActor(AActor* newActor, bool bInOverrideBlendDuration, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.SwitchToActorsCameraActor"));
    struct Params_SwitchToActorsCameraActor {
        AActor* newActor; // 0x0
        bool bInOverrideBlendDuration; // 0x8
        char pad_9[0x3];
        float InBlendDuration; // 0xc
    }; // Size: 0x10
    Params_SwitchToActorsCameraActor params{};
    params.newActor = (AActor*)newActor;
    params.bInOverrideBlendDuration = (bool)bInOverrideBlendDuration;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void ACameraStackManager::SwitchToActiveTargetCamera(bool bInOverrideBlendDuration, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.SwitchToActiveTargetCamera"));
    struct Params_SwitchToActiveTargetCamera {
        bool bInOverrideBlendDuration; // 0x0
        char pad_1[0x3];
        float InBlendDuration; // 0x4
    }; // Size: 0x8
    Params_SwitchToActiveTargetCamera params{};
    params.bInOverrideBlendDuration = (bool)bInOverrideBlendDuration;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void ACameraStackManager::SetFixedCameraInPlace(bool bSetToFixed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.SetFixedCameraInPlace"));
    struct Params_SetFixedCameraInPlace {
        bool bSetToFixed; // 0x0
    }; // Size: 0x1
    Params_SetFixedCameraInPlace params{};
    params.bSetToFixed = (bool)bSetToFixed;
    ProcessEvent(func, &params);
}
bool ACameraStackManager::IsCameraFixedInPlace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.IsCameraFixedInPlace"));
    struct Params_IsCameraFixedInPlace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCameraFixedInPlace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName ACameraStackManager::GetCameraStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.GetCameraStyle"));
    struct Params_GetCameraStyle {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCameraStyle params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ACameraStackActor* ACameraStackManager::GetActorsCameraActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackManager.GetActorsCameraActor"));
    struct Params_GetActorsCameraActor {
        AActor* InActor; // 0x0
        ACameraStackActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActorsCameraActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
