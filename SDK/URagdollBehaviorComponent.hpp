#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class URagdollBehaviorConfigAsset;
class USkeletalMeshComponent;
struct FHitResult;
class URagdollControlComponent;
class AActor;
class URagdollBehavior;
class URagdollRecoveryAssistBehavior;
struct FAudioLayerBehaviorState;
#pragma pack(push, 1)
class URagdollBehaviorComponent : public UActorComponent {
public:
    URagdollBehaviorConfigAsset* Config; // 0xc8
    char pad_d0[0x18];
    USkeletalMeshComponent* SkeletalMeshComponent; // 0xe8
    URagdollControlComponent* RagdollControlComponent; // 0xf0
    URagdollBehavior* CurBehavior; // 0xf8
    URagdollBehavior* PriorBehavior; // 0x100
    char pad_108[0x60];
    URagdollRecoveryAssistBehavior* CurRecoveryAssistBehavior; // 0x168
    URagdollRecoveryAssistBehavior* PriorRecoveryAssistBehavior; // 0x170
    char pad_178[0x68];
    static URagdollBehaviorComponent* StaticClass();
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    bool IsSensoryStateStatisfied(FName targetSensoryState);
    bool IsPoseStateStatisfied(FName targetPose);
    bool IsGetupAllowed();
    bool HasValidSetup();
    void DoAudioBehaviorChangeEvent(FAudioLayerBehaviorState& rLayerState);
}; // Size: 0x1e0
#pragma pack(pop)
