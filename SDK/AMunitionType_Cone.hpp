#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class UClass;
class UParticleSystem;
class UAkAudioEvent;
#pragma pack(push, 1)
class AMunitionType_Cone : public AMunitionType_Base {
public:
    float m_Range; // 0x360
    float m_endRadius; // 0x364
    UClass* m_damageType; // 0x368
    bool m_stopAtCollision; // 0x370
    char pad_371[0x7];
    UParticleSystem* m_explosionFX; // 0x378
    UParticleSystem* m_hitActorFX; // 0x380
    UParticleSystem* m_hitTerrainFX; // 0x388
    UParticleSystem* m_hitBlockedFX; // 0x390
    UAkAudioEvent* m_explosionSfx; // 0x398
    UAkAudioEvent* m_hitActorSfx; // 0x3a0
    UAkAudioEvent* m_hitTerrainSfx; // 0x3a8
    UAkAudioEvent* m_hitBlockedSfx; // 0x3b0
    char pad_3b8[0x10];
    static AMunitionType_Cone* StaticClass();
}; // Size: 0x3c8
#pragma pack(pop)
