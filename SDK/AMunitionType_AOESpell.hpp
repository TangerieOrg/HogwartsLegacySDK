#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class UClass;
class UCurveFloat;
class UParticleSystem;
class UAkAudioEvent;
class ASpellTool;
struct FHitResult;
#pragma pack(push, 1)
class AMunitionType_AOESpell : public AMunitionType_Base {
public:
    char pad_360[0x8];
    float m_hitVictimInterval; // 0x368
    char pad_36c[0x4];
    UClass* m_damageType; // 0x370
    UParticleSystem* m_explosionFX; // 0x378
    UAkAudioEvent* m_explosionSfx; // 0x380
    float PhysicsImpulse; // 0x388
    bool bPlayAtBottomOfInstigator; // 0x38c
    bool m_stopAtCollision; // 0x38d
    bool bHitAllBrokenPieces; // 0x38e
    char pad_38f[0x1];
    float m_delayedDeathTime; // 0x390
    bool bBreakBlockFX; // 0x394
    char pad_395[0x3];
    float PerceptionNoiseEventLoudness; // 0x398
    float PerceptionNoiseEventMaxRange; // 0x39c
    UCurveFloat* RadiusPercentAtTime; // 0x3a0
    ASpellTool* SpellTool; // 0x3a8
    char pad_3b0[0x118];
    static AMunitionType_AOESpell* StaticClass();
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    ASpellTool* GetSpellTool();
}; // Size: 0x4c8
#pragma pack(pop)
