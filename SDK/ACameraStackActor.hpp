#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FCameraInputMappings.hpp"
#include "FCameraStackActorBehaviorTreePair.hpp"
#include "FCameraStackData.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UInputComponent;
class UCameraStack;
class UCameraStackCineComponent;
class UBehaviorTree;
class UCameraStackTarget;
class UCameraStackInput;
class UClass;
class UObject;
class UCameraStackBehavior;
class UCameraStackBehaviorCore;
#pragma pack(push, 1)
class ACameraStackActor : public AActor {
public:
    UCameraStackCineComponent* CameraComponent; // 0x248
    FCameraStackData DefaultData; // 0x250
    UCameraStackTarget* Target; // 0x268
    TArray<UBehaviorTree*> BehaviorTrees; // 0x270
    bool bDestroyIfSpawnedOnEndViewTarget; // 0x280
    char pad_281[0x3];
    int32_t InputPriorityOverride; // 0x284
    bool bOverrideInputMappings; // 0x288
    char pad_289[0x3];
    FCameraInputMappings InputMappingsOverride; // 0x28c
    bool bUnbindInputOnEndViewTarget; // 0x324
    char pad_325[0x1b];
    UCameraStack* BehaviorStack; // 0x340
    UCameraStackInput* Input; // 0x348
    char pad_350[0xa0];
    UInputComponent* CameraInputComponent; // 0x3f0
    TArray<FCameraStackActorBehaviorTreePair> BehaviorTreePairs; // 0x3f8
    static ACameraStackActor* StaticClass();
    void SetNamedSecondaryTargetActor(FName InName, AActor* InActor);
    void SetCameraContext(FName InContextName, bool bSet);
    void ResetRotationToTarget(float InBlendDuration, FRotator& InDesiredDelta, bool bInResetYaw, bool bInResetPitch);
    bool IsCameraContextSet(FName InContextName);
    FTransform GetUnblendedCameraViewTransform();
    UCameraStackTarget* GetTarget();
    AActor* GetNamedSecondaryTargetActor(FName InName);
    UCameraStackInput* GetInput();
    FTransform GetCameraViewTransform();
    UCameraStack* GetBehaviors();
    FRotator GetArmRotation();
    void ForceSetArmRotationTowardsLocation(FVector InLocation);
    void ForceSetArmRotation(FRotator InRotation, bool bUseDefaultPitch);
    void ForceCameraReset();
    UCameraStackBehavior* CreateNonCoreBehavior(UClass* BehaviorClass, UObject* Template);
    UCameraStackBehaviorCore* CreateCoreBehavior(UClass* BehaviorClass, UObject* Template);
    void ClearCameraContext(FName InContextName);
}; // Size: 0x408
#pragma pack(pop)
