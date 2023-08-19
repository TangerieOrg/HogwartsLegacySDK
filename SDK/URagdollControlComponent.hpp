#pragma once
#include <cstdint>
#include "EImpactReactionStrength.hpp"
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "FRagdollControlPostAnimationTickFunction.hpp"
#include "UActorComponent.hpp"
class URagdollControlConfig;
class UClass;
class URagdollBehaviorConfigAsset;
struct FVector;
class USkeletalMeshComponent;
class URagdollBehaviorComponent;
class AActor;
#pragma pack(push, 1)
class URagdollControlComponent : public UActorComponent {
public:
    URagdollControlConfig* Config; // 0xc8
    UClass* RagdollBehaviorClass; // 0xd0
    URagdollBehaviorConfigAsset* RagdollBehaviorConfig; // 0xd8
    char pad_e0[0x60];
    FRagdollControlPostAnimationTickFunction PostAnimationTickFunction; // 0x140
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x188
    URagdollBehaviorComponent* RagdollBehaviorComponent; // 0x190
    char pad_198[0x3d8];
    static URagdollControlComponent* StaticClass();
    void StartReaction();
    void StartImpactReaction(EImpactReactionStrength InReactionStrength, FVector& InWorldLocation, FVector& InWorldDirection, float InWorldImpactStrength);
    void ShowImpactReaction(EImpactReactionStrength InReactionStrength, FVector& InWorldLocation, FVector& InWorldDirection, float InWorldImpactStrength);
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    void SetPoseDrivingMode(ERagdollPoseDrivingMode InPoseDrivingMode, float InBlendDuration);
    void SetOwnerResurrected();
    void SetOwnerIsDead();
    void SetInWater(bool bInWater);
    void SetCOMDrivingModes(ERagdollCOMLocationDrivingMode InLocationDrivingMode, ERagdollCOMRotationDrivingMode InRotationDrivingMode);
    void SetBodyConstraintContext(FName InContextName, bool bInEnable);
    void RemoveBakedRigidbody();
    bool IsFullRagdoll();
    bool IsBakedToRigidbody();
    bool HasValidSetup();
    void ForcePopOutOfRagdollImmediately();
    void DisallowBlendingOutOfRagdollUntilForced();
    void DisableCcd();
    void DeepFreezeWithActor(AActor* InActor, FName InCollisionProfile);
    bool CanGetup();
    void BlendBack(bool bInStationaryCapsuleWhileBlending, float InBlendDurationOverride);
    void AttachBakedRigidbody();
}; // Size: 0x570
#pragma pack(pop)
