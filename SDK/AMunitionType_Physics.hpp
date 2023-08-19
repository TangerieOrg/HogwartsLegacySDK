#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
#include "FVector.hpp"
class UClass;
class UParticleSystem;
class UAkAudioEvent;
class UMaterialInterface;
#pragma pack(push, 1)
class AMunitionType_Physics : public AMunitionType_Base {
public:
    float m_speed; // 0x360
    bool m_explodeOnContactWithActors; // 0x364
    bool m_explodeOnContactWithTerrain; // 0x365
    bool m_explodeWhenLifetimeExpires; // 0x366
    char pad_367[0x1];
    UClass* m_AOE; // 0x368
    UParticleSystem* m_hitActorFX; // 0x370
    UParticleSystem* m_hitTerrainFX; // 0x378
    UParticleSystem* m_hitBlockedFX; // 0x380
    UParticleSystem* m_hitDeflectedFX; // 0x388
    UAkAudioEvent* m_hitActorSfx; // 0x390
    UAkAudioEvent* m_hitTerrainSfx; // 0x398
    UAkAudioEvent* m_hitBlockedSfx; // 0x3a0
    UAkAudioEvent* m_hitDeflectedSfx; // 0x3a8
    UAkAudioEvent* m_destroyedTargetSfx; // 0x3b0
    bool m_placeDecal; // 0x3b8
    char pad_3b9[0x7];
    UMaterialInterface* m_decalMaterial; // 0x3c0
    FVector m_decalSize; // 0x3c8
    float m_decalLifeSpan; // 0x3d4
    char pad_3d8[0x30];
    static AMunitionType_Physics* StaticClass();
}; // Size: 0x408
#pragma pack(pop)
