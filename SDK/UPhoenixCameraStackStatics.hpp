#pragma once
#include <cstdint>
#include "ECameraStackLookAtStrength.hpp"
#include "FVector.hpp"
#include "UCameraStackStatics.hpp"
class UObject;
class ACameraStackLookAtTargetActor;
class AActor;
class UClass;
#pragma pack(push, 1)
class UPhoenixCameraStackStatics : public UCameraStackStatics {
public:
    static UPhoenixCameraStackStatics* StaticClass();
    static ACameraStackLookAtTargetActor* SpawnCameraLookAtTargetActor(UObject* WorldContextObject, FVector WorldLocation, ECameraStackLookAtStrength LookAtStrength);
    static void SetPlayerCameraLookAtLocationForDuration(UObject* WorldContextObject, FVector LookAtLocation, float Duration, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex);
    static void SetPlayerCameraLookAtLocation(UObject* WorldContextObject, FVector LookAtLocation, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex);
    static void SetPlayerCameraLookAtActorForDuration(UObject* WorldContextObject, AActor* LookAtActor, float Duration, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex);
    static void SetPlayerCameraLookAtActor(UObject* WorldContextObject, AActor* LookAtActor, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex);
    static void ReleasePlayerCameraLookAt(UObject* WorldContextObject, int32_t PlayerIndex);
    static void PlayWorldCameraShakeScale(UObject* WorldContextObject, UClass* Shake, FVector epicenter, float InnerRadius, float OuterRadius, float Falloff, float InScale, bool bOrientShakeTowardsEpicenter);
    static ACameraStackLookAtTargetActor* GetLookAtTargetActorWithStrength(UObject* WorldContextObject, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex);
    static ACameraStackLookAtTargetActor* GetHighestPriorityLookAtTargetActor(UObject* WorldContextObject, int32_t PlayerIndex);
}; // Size: 0x28
#pragma pack(pop)
