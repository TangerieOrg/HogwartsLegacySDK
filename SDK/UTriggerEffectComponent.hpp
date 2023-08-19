#pragma once
#include <cstdint>
#include "EInteractiveAction.hpp"
#include "EObjectTypeQuery.hpp"
#include "USceneComponent.hpp"
class USpellToolRecord;
class UParticleSystem;
class UAkAudioEvent;
class AActor;
class UParticleSystemComponent;
#pragma pack(push, 1)
class UTriggerEffectComponent : public USceneComponent {
public:
    USpellToolRecord* SpellToBeUsed; // 0x220
    float TimeBeforeTriggerStarts; // 0x228
    bool bUseSpellImpactFX; // 0x22c
    bool bUseSpellMuzzleFX; // 0x22d
    char pad_22e[0x2];
    UParticleSystem* TriggerEffectVfx; // 0x230
    UAkAudioEvent* TriggerEffectSfx; // 0x238
    bool bAffectsSpecificActors; // 0x240
    char pad_241[0x7];
    TArray<AActor*> ActorsToAffect; // 0x248
    bool bUseRadiusForEffect; // 0x258
    char pad_259[0x3];
    float Radius; // 0x25c
    uint8_t bIgnoreOwningActor : 1; // 0x260
    uint8_t pad_bitfield_260_1 : 7;
    char pad_261[0x7];
    TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x268
    char pad_278[0x8];
    UParticleSystemComponent* ParticleSystemComponent; // 0x280
    char pad_288[0x18];
    static UTriggerEffectComponent* StaticClass();
    void RemoveObjectTypeToAffect(EObjectTypeQuery ObjectType);
    void AddObjectTypeToAffect(EObjectTypeQuery ObjectType);
}; // Size: 0x2a0
#pragma pack(pop)
