#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class UClass;
class UParticleSystem;
class UAkAudioEvent;
class ASpellTool;
struct FHitResult;
#pragma pack(push, 1)
class AMunitionType_ConeSpell : public AMunitionType_Base {
public:
    char pad_360[0x8];
    float EndRadius; // 0x368
    char pad_36c[0x4];
    UClass* DamageType; // 0x370
    bool StopAtCollision; // 0x378
    char pad_379[0x7];
    UParticleSystem* ExplosionVFX; // 0x380
    UAkAudioEvent* ExplosionSfx; // 0x388
    ASpellTool* SpellTool; // 0x390
    char pad_398[0x20];
    static AMunitionType_ConeSpell* StaticClass();
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    ASpellTool* GetSpellTool();
}; // Size: 0x3b8
#pragma pack(pop)
