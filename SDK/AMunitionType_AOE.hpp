#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class UClass;
class UParticleSystem;
class UAkAudioEvent;
#pragma pack(push, 1)
class AMunitionType_AOE : public AMunitionType_Base {
public:
    float MinDamage; // 0x360
    float m_radiusStart; // 0x364
    float m_radiusEnd; // 0x368
    bool bUseCustomGrowthDuration; // 0x36c
    char pad_36d[0x3];
    float CustomGrowthDuration; // 0x370
    float m_hitVictimInterval; // 0x374
    UClass* m_damageType; // 0x378
    UParticleSystem* m_explosionFX; // 0x380
    bool PlayExplosionOnGround; // 0x388
    char pad_389[0x7];
    UAkAudioEvent* m_explosionSfx; // 0x390
    float PhysicsImpulse; // 0x398
    bool m_stopAtCollision; // 0x39c
    bool bUnblockable; // 0x39d
    bool bBreakBlockFX; // 0x39e
    char pad_39f[0x1];
    UParticleSystem* m_hitActorFX; // 0x3a0
    UParticleSystem* m_hitTerrainFX; // 0x3a8
    UParticleSystem* m_hitBlockedFX; // 0x3b0
    UAkAudioEvent* m_hitActorSfx; // 0x3b8
    UAkAudioEvent* m_hitTerrainSfx; // 0x3c0
    UAkAudioEvent* m_hitBlockedSfx; // 0x3c8
    char pad_3d0[0x60];
    static AMunitionType_AOE* StaticClass();
}; // Size: 0x430
#pragma pack(pop)
