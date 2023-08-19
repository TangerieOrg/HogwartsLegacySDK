#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
#include "ECollisionChannel.hpp"
#include "FVector.hpp"
class UClass;
class UAkAudioEvent;
#pragma pack(push, 1)
class AMunitionType_Hitbox : public AMunitionType_Base {
public:
    FVector m_Extents; // 0x360
    float PhysicsImpulse; // 0x36c
    float m_hitVictimInterval; // 0x370
    bool bUseMunitionOwnerAtImpactSource; // 0x374
    bool bUseTraceAsDamageImpactDirection; // 0x375
    char pad_376[0x2];
    UClass* m_damageType; // 0x378
    bool bUnblockable; // 0x380
    ECollisionChannel CollisionChannel; // 0x381
    bool bOnlyDetectBlockingHits; // 0x382
    char pad_383[0x7d];
    UAkAudioEvent* m_hitActorSfx; // 0x400
    UAkAudioEvent* m_hitTerrainSfx; // 0x408
    UAkAudioEvent* m_hitBlockedSfx; // 0x410
    char pad_418[0x58];
    static AMunitionType_Hitbox* StaticClass();
}; // Size: 0x470
#pragma pack(pop)
