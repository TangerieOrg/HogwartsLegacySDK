#pragma once
#include <cstdint>
#include "EImpactTypes.hpp"
#include "EObjectSizeClass.hpp"
#include "EWidgetType.hpp"
class UAkAudioEvent;
class ULocalStencilEffectDelegatedActorOverride;
#pragma pack(push, 1)
struct FObjectStateData {
    char pad_0[0x60];
    UAkAudioEvent* HitSfx; // 0x60
    float m_baseHealth; // 0x68
    float m_minDamageThreshold; // 0x6c
    float OverrideMass; // 0x70
    float MinOptimumAvatarDistance; // 0x74
    float MaxOptimumAvatarDistance; // 0x78
    uint8_t bIsPersistent : 1; // 0x7c
    uint8_t bDamagable : 1; // 0x7c
    uint8_t bNoDamageBreakable : 1; // 0x7c
    uint8_t bImmuneToSpells : 1; // 0x7c
    uint8_t bCanBecomeMovable : 1; // 0x7c
    uint8_t bHighlightWhenBroken : 1; // 0x7c
    uint8_t m_important : 1; // 0x7c
    uint8_t bRevelioResource : 1; // 0x7c
    uint8_t m_hidden : 1; // 0x7d
    uint8_t bExplode : 1; // 0x7d
    uint8_t bExplodeOnFire : 1; // 0x7d
    uint8_t bTransformable : 1; // 0x7d
    uint8_t bStartBroken : 1; // 0x7d
    uint8_t bTargetable : 1; // 0x7d
    uint8_t bSpecialTargetPerception : 1; // 0x7d
    uint8_t bIgnoreLimitedCountRules : 1; // 0x7d
    uint8_t bIgnoreActorHit : 1; // 0x7e
    uint8_t bIgnoreMunitionImpact : 1; // 0x7e
    uint8_t bTakeDamageFromCharacterCollisions : 1; // 0x7e
    uint8_t bFragile : 1; // 0x7e
    uint8_t bDamagableInPieces : 1; // 0x7e
    uint8_t bTreatAsCharacterForDamage : 1; // 0x7e
    uint8_t bDieInWater : 1; // 0x7e
    uint8_t bNeverAffectNavmesh : 1; // 0x7e
    uint8_t bNavOverrideMobilityCheck : 1; // 0x7f
    uint8_t bShowTargetUI : 1; // 0x7f
    uint8_t bCurrentlyTargetedUI : 1; // 0x7f
    uint8_t pad_bitfield_7f_3 : 5;
    EWidgetType WidgetType; // 0x80
    uint8_t PriorityLaunchTarget; // 0x81
    char pad_82[0x1];
    EImpactTypes ImpactTypeOverride; // 0x83
    EObjectSizeClass BaseSizeClass; // 0x84
    char pad_85[0x3];
    TArray<ULocalStencilEffectDelegatedActorOverride*> StencilEffectOverrides; // 0x88
}; // Size: 0x98
#pragma pack(pop)
