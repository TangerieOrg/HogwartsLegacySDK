#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class AActor;
class UBoxComponent;
class UBillboardComponent;
class UPrimitiveComponent;
class USpellToolRecord;
class UAkAudioEvent;
struct FHitResult;
class UParticleSystem;
class UParticleSystemComponent;
#pragma pack(push, 1)
class UCurseComponent : public USceneComponent {
public:
    UBillboardComponent* BacklashOriginComponent; // 0x220
    UBillboardComponent* VFXPositionComponent; // 0x228
    int32_t CurseLevel; // 0x230
    bool bUncursingIsPermanent; // 0x234
    char pad_235[0x3];
    USpellToolRecord* SpellToBeUsedOnInteract; // 0x238
    UParticleSystem* CursedVfx; // 0x240
    UAkAudioEvent* CursedSfx; // 0x248
    float BuildupTimeBeforeFiring; // 0x250
    char pad_254[0x4];
    UParticleSystem* CursedBuildupVfx; // 0x258
    UAkAudioEvent* CursedBuildupSfx; // 0x260
    bool bUseVolumeOverlapEvent; // 0x268
    char pad_269[0x3];
    float CooldownBetweenSpells; // 0x26c
    int32_t NumberOfSpellsInSequence; // 0x270
    float CooldownBetweenSequences; // 0x274
    bool bKeepCurseZoneActiveWhenBroken; // 0x278
    char pad_279[0x37];
    UParticleSystemComponent* ParticleSystemComponent; // 0x2b0
    char pad_2b8[0x8];
    UParticleSystemComponent* BuildupParticleSystemComponent; // 0x2c0
    char pad_2c8[0x8];
    static UCurseComponent* StaticClass();
    void UncurseEnds();
    bool Uncurse(int32_t UncurseLevel);
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    bool IsCursed();
    void ActivateCurseWithBuildup(AActor* Target);
}; // Size: 0x2d0
#pragma pack(pop)
