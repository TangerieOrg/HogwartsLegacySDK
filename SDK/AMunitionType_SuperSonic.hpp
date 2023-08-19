#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class UParticleSystem;
class UAkAudioEvent;
class UMaterialInterface;
#pragma pack(push, 1)
class AMunitionType_SuperSonic : public AMunitionType_Base {
public:
    UParticleSystem* m_hitActorFX; // 0x360
    UAkAudioEvent* m_hitActorSfx; // 0x368
    UParticleSystem* m_hitTerrainFX; // 0x370
    UAkAudioEvent* m_hitTerrainSfx; // 0x378
    bool m_placeDecal; // 0x380
    char pad_381[0x7];
    UMaterialInterface* m_decalMaterial; // 0x388
    float m_decalSize; // 0x390
    float m_decalLifeSpan; // 0x394
    char pad_398[0x10];
    static AMunitionType_SuperSonic* StaticClass();
}; // Size: 0x3a8
#pragma pack(pop)
