#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "FDisillusionmentData.hpp"
#include "FMultiFX2Handle.hpp"
#include "UStateEffectComponent.hpp"
class AActor;
class UMaterialSwap;
class ACharacter;
#pragma pack(push, 1)
class UDisillusionmentComponent : public UStateEffectComponent {
public:
    FDisillusionmentData DisillusionmentData; // 0x190
    AActor* SightDetectionSphereActor; // 0x1b8
    char pad_1c0[0x50];
    TArray<AActor*> FullyAwareActors; // 0x210
    float MinSightAngleDegrees; // 0x220
    char pad_224[0x4];
    FMultiFX2Handle FX2Handle; // 0x228
    UMaterialSwap* MaterialSwap; // 0x230
    TArray<AActor*> TaggedActors; // 0x238
    char pad_248[0x8];
    static UDisillusionmentComponent* StaticClass();
    static void RemoveDisillusionmentFromActor(AActor* Actor, bool bEvenIfCloak);
    void PerceptionDoneHandler(AActor* Actor, bool bSuccess, bool bReturnControl);
    void OwnerMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void OnActorEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnActorBeginOverlap(AActor* SelfActor, AActor* OtherActor);
    static bool IsActorDisillusionedByCloak(AActor* Actor);
    static bool IsActorDisillusioned(AActor* Actor);
    float GetVisibilityPercentage();
}; // Size: 0x250
#pragma pack(pop)
