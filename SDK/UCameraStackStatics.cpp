#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACameraStackManager.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCameraStackSettings.hpp"
#include "UCameraStackStatics.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCameraStackStatics::SetPlayerCameraContext(UObject* WorldContextObject, FName InContextName, bool bSet, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.SetPlayerCameraContext"));
    struct Params_SetPlayerCameraContext {
        UObject* WorldContextObject; // 0x0
        FName InContextName; // 0x8
        bool bSet; // 0x10
        char pad_11[0x3];
        int32_t PlayerIndex; // 0x14
    }; // Size: 0x18
    Params_SetPlayerCameraContext params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InContextName = (FName)InContextName;
    params.bSet = (bool)bSet;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UCameraStackStatics* UCameraStackStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackStatics");
    return (UCameraStackStatics*)res;
}
ACameraStackActor* UCameraStackStatics::SpawnCameraStackActorForTarget(AActor* InTargetActor, UCameraStackSettings* InStackSettings, UClass* InCameraActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.SpawnCameraStackActorForTarget"));
    struct Params_SpawnCameraStackActorForTarget {
        AActor* InTargetActor; // 0x0
        UCameraStackSettings* InStackSettings; // 0x8
        UClass* InCameraActorClass; // 0x10
        ACameraStackActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SpawnCameraStackActorForTarget params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InStackSettings = (UCameraStackSettings*)InStackSettings;
    params.InCameraActorClass = (UClass*)InCameraActorClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
FTransform UCameraStackStatics::GetPlayerViewTransform(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.GetPlayerViewTransform"));
    struct Params_GetPlayerViewTransform {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetPlayerViewTransform params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UCameraStackStatics::SetPlayerCameraNamedTargetActor(UObject* WorldContextObject, FName InTargetName, AActor* InTargetActor, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.SetPlayerCameraNamedTargetActor"));
    struct Params_SetPlayerCameraNamedTargetActor {
        UObject* WorldContextObject; // 0x0
        FName InTargetName; // 0x8
        AActor* InTargetActor; // 0x10
        int32_t PlayerIndex; // 0x18
    }; // Size: 0x1c
    Params_SetPlayerCameraNamedTargetActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InTargetName = (FName)InTargetName;
    params.InTargetActor = (AActor*)InTargetActor;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCameraStackStatics::ResetPlayerCameraRotation(UObject* WorldContextObject, int32_t PlayerIndex, float ResetDuration, FRotator& DesiredDelta, bool bResetYaw, bool bResetPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.ResetPlayerCameraRotation"));
    struct Params_ResetPlayerCameraRotation {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        float ResetDuration; // 0xc
        FRotator DesiredDelta; // 0x10
        bool bResetYaw; // 0x1c
        bool bResetPitch; // 0x1d
    }; // Size: 0x1e
    Params_ResetPlayerCameraRotation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.ResetDuration = (float)ResetDuration;
    params.DesiredDelta = (FRotator)DesiredDelta;
    params.bResetYaw = (bool)bResetYaw;
    params.bResetPitch = (bool)bResetPitch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DesiredDelta = params.DesiredDelta;
}
ACameraStackManager* UCameraStackStatics::GetPlayerCameraStackManager(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.GetPlayerCameraStackManager"));
    struct Params_GetPlayerCameraStackManager {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        ACameraStackManager* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPlayerCameraStackManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackManager*)params.ReturnValue;
}
FTransform UCameraStackStatics::GetPlayerCameraTransform(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.GetPlayerCameraTransform"));
    struct Params_GetPlayerCameraTransform {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetPlayerCameraTransform params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FRotator UCameraStackStatics::GetPlayerCameraArmRotation(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.GetPlayerCameraArmRotation"));
    struct Params_GetPlayerCameraArmRotation {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetPlayerCameraArmRotation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
ACameraStackActor* UCameraStackStatics::GetCameraStackActorForTarget(AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.GetCameraStackActorForTarget"));
    struct Params_GetCameraStackActorForTarget {
        AActor* InTargetActor; // 0x0
        ACameraStackActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCameraStackActorForTarget params{};
    params.InTargetActor = (AActor*)InTargetActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
void UCameraStackStatics::ForceSetPlayerCameraArmRotationTowardsLocation(UObject* WorldContextObject, int32_t PlayerIndex, FVector InTargetLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.ForceSetPlayerCameraArmRotationTowardsLocation"));
    struct Params_ForceSetPlayerCameraArmRotationTowardsLocation {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        FVector InTargetLocation; // 0xc
    }; // Size: 0x18
    Params_ForceSetPlayerCameraArmRotationTowardsLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.InTargetLocation = (FVector)InTargetLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCameraStackStatics::ForceSetPlayerCameraArmRotation(UObject* WorldContextObject, int32_t PlayerIndex, FRotator InRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.ForceSetPlayerCameraArmRotation"));
    struct Params_ForceSetPlayerCameraArmRotation {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        FRotator InRotation; // 0xc
    }; // Size: 0x18
    Params_ForceSetPlayerCameraArmRotation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.InRotation = (FRotator)InRotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCameraStackStatics::ForcePlayerCameraReset(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.ForcePlayerCameraReset"));
    struct Params_ForcePlayerCameraReset {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
    }; // Size: 0xc
    Params_ForcePlayerCameraReset params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCameraStackStatics::FilterCurrentPlayerCameraInput(UObject* WorldContextObject, int32_t PlayerIndex, float InDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.FilterCurrentPlayerCameraInput"));
    struct Params_FilterCurrentPlayerCameraInput {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        float InDuration; // 0xc
    }; // Size: 0x10
    Params_FilterCurrentPlayerCameraInput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.InDuration = (float)InDuration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCameraStackStatics::ClearPlayerCameraContext(UObject* WorldContextObject, FName InContextName, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.ClearPlayerCameraContext"));
    struct Params_ClearPlayerCameraContext {
        UObject* WorldContextObject; // 0x0
        FName InContextName; // 0x8
        int32_t PlayerIndex; // 0x10
    }; // Size: 0x14
    Params_ClearPlayerCameraContext params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InContextName = (FName)InContextName;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCameraStackStatics::CheckForCameraCutOnTeleport(AActor* InTeleportingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackStatics.CheckForCameraCutOnTeleport"));
    struct Params_CheckForCameraCutOnTeleport {
        AActor* InTeleportingActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CheckForCameraCutOnTeleport params{};
    params.InTeleportingActor = (AActor*)InTeleportingActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
