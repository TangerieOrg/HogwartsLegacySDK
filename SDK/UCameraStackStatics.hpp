#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UCameraStackSettings;
class UClass;
class ACameraStackManager;
class ACameraStackActor;
class UObject;
#pragma pack(push, 1)
class UCameraStackStatics : public UBlueprintFunctionLibrary {
public:
    static UCameraStackStatics* StaticClass();
    static ACameraStackActor* SpawnCameraStackActorForTarget(AActor* InTargetActor, UCameraStackSettings* InStackSettings, UClass* InCameraActorClass);
    static void SetPlayerCameraNamedTargetActor(UObject* WorldContextObject, FName InTargetName, AActor* InTargetActor, int32_t PlayerIndex);
    static void SetPlayerCameraContext(UObject* WorldContextObject, FName InContextName, bool bSet, int32_t PlayerIndex);
    static void ResetPlayerCameraRotation(UObject* WorldContextObject, int32_t PlayerIndex, float ResetDuration, FRotator& DesiredDelta, bool bResetYaw, bool bResetPitch);
    static FTransform GetPlayerViewTransform(UObject* WorldContextObject, int32_t PlayerIndex);
    static FTransform GetPlayerCameraTransform(UObject* WorldContextObject, int32_t PlayerIndex);
    static ACameraStackManager* GetPlayerCameraStackManager(UObject* WorldContextObject, int32_t PlayerIndex);
    static FRotator GetPlayerCameraArmRotation(UObject* WorldContextObject, int32_t PlayerIndex);
    static ACameraStackActor* GetCameraStackActorForTarget(AActor* InTargetActor);
    static void ForceSetPlayerCameraArmRotationTowardsLocation(UObject* WorldContextObject, int32_t PlayerIndex, FVector InTargetLocation);
    static void ForceSetPlayerCameraArmRotation(UObject* WorldContextObject, int32_t PlayerIndex, FRotator InRotation);
    static void ForcePlayerCameraReset(UObject* WorldContextObject, int32_t PlayerIndex);
    static void FilterCurrentPlayerCameraInput(UObject* WorldContextObject, int32_t PlayerIndex, float InDuration);
    static void ClearPlayerCameraContext(UObject* WorldContextObject, FName InContextName, int32_t PlayerIndex);
    static bool CheckForCameraCutOnTeleport(AActor* InTeleportingActor);
}; // Size: 0x28
#pragma pack(pop)
