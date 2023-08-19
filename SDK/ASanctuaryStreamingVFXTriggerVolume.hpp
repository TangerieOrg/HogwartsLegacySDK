#pragma once
#include <cstdint>
#include "AStreamingPlaceholderBase.hpp"
#include "ESanctuaryIdentity.hpp"
#include "FIdentityParticleSystemsData.hpp"
#include "FParticleSystemsData.hpp"
class UBoxComponent;
class AActor;
class UParticleSystemComponent;
class UNiagaraComponent;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ASanctuaryStreamingVFXTriggerVolume : public AStreamingPlaceholderBase {
public:
    bool bAutoSwapWhenIdentityChanges; // 0x260
    char pad_261[0x7];
    FIdentityParticleSystemsData IdentityParticleSystems; // 0x268
    FParticleSystemsData DefaultSystem; // 0x2b8
    char pad_2d8[0x50];
    UBoxComponent* BoxComponent; // 0x328
    bool PlayerTriggers; // 0x330
    bool CameraTriggers; // 0x331
    char pad_332[0x2];
    float OffsetAmount; // 0x334
    bool PlayerRelativeMovement; // 0x338
    char pad_339[0x7];
    TArray<UParticleSystemComponent*> ParticleEffectsList; // 0x340
    TArray<UNiagaraComponent*> NiagaraEffectsList; // 0x350
    bool IsActivated; // 0x360
    char pad_361[0xf7];
    static ASanctuaryStreamingVFXTriggerVolume* StaticClass();
    void OnParticleSystemFinished(UParticleSystemComponent* PSystem);
    void OnOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnNiagaraFinished(UNiagaraComponent* PSystem);
    void OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity);
}; // Size: 0x458
#pragma pack(pop)
