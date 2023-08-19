#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UCameraStackSettings;
class UClass;
class ACameraStackActor;
class APlayerController;
#pragma pack(push, 1)
class ACameraStackTransitionController : public AActor {
public:
    UCameraStackSettings* StackSettings; // 0x248
    UClass* CameraActorClass; // 0x250
    bool bConstrainAspectRatio; // 0x258
    bool bRelativeToArmRotation; // 0x259
    char pad_25a[0x6];
    ACameraStackActor* CameraStackActor; // 0x260
    char pad_268[0x18];
    static ACameraStackTransitionController* StaticClass();
    void TransitionToCameraAndTargetLocation(AActor* InCameraActor, FVector InTargetLocation, float InTransitionDuration, float InDelay);
    void TransitionToCameraAndTargetActor(AActor* InCameraActor, AActor* InTargetLocationActor, float InTransitionDuration, float InDelay);
    void TransitionToCamera(AActor* InCameraActor, float InTransitionDuration, float InDelay);
    APlayerController* GetPlayerController();
}; // Size: 0x280
#pragma pack(pop)
