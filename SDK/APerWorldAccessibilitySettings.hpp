#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EHighContrastGameplayBucket.hpp"
class UMaterialParameterCollection;
class UPrimitiveComponent;
#pragma pack(push, 1)
class APerWorldAccessibilitySettings : public AActor {
public:
    UMaterialParameterCollection* HighContrastMPC; // 0x248
    UMaterialParameterCollection* ExtraHighContrastMPC; // 0x250
    char pad_258[0x10];
    int32_t TargetStencilValue; // 0x268
    char pad_26c[0x134];
    int32_t SetBaseStencilValue; // 0x3a0
    int32_t LastSetTargetStencilValue; // 0x3a4
    float LastFadeToBlackBlend; // 0x3a8
    float LastExtraValue; // 0x3ac
    float StateAlpha; // 0x3b0
    char pad_3b4[0x4];
    static APerWorldAccessibilitySettings* StaticClass();
    static void RemovePrimitiveFromHighContrastGameplayBuckets(UPrimitiveComponent* PrimitiveComponent);
    static void RemoveActorFromHighContrastGameplayBuckets(AActor* Actor);
    static void RemoveActorFromHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket);
    static void PrimitiveIsInHighContrastGameplayBucket(UPrimitiveComponent* PrimitiveComponent, EHighContrastGameplayBucket& Bucket, bool& bFound);
    static void AddPrimitiveToHighContrastGameplayBucket(UPrimitiveComponent* PrimitiveComponent, EHighContrastGameplayBucket Bucket);
    static void AddActorToHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket);
    static void ActorIsInHighContrastGameplayBucket(AActor* Actor, EHighContrastGameplayBucket Bucket, bool& bFound);
}; // Size: 0x3b8
#pragma pack(pop)
