#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UActorComponent.hpp"
class USkeletalMeshComponent;
struct FPhysicalAnimationData;
#pragma pack(push, 1)
class UPhysicalAnimationComponent : public UActorComponent {
public:
    float StrengthMultiplyer; // 0xc8
    char pad_cc[0x4];
    USkeletalMeshComponent* SkeletalMeshComponent; // 0xd0
    char pad_d8[0x30];
    static UPhysicalAnimationComponent* StaticClass();
    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    FTransform GetBodyTargetTransform(FName BodyName);
    void ApplyPhysicalAnimationSettingsBelow(FName BodyName, FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    void ApplyPhysicalAnimationSettings(FName BodyName, FPhysicalAnimationData& PhysicalAnimationData);
    void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
}; // Size: 0x108
#pragma pack(pop)
