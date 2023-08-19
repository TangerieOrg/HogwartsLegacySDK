#pragma once
#include <cstdint>
#include "EObjectTypeQuery.hpp"
#include "EParticleCollisionComplete.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleCollisionBase.hpp"
#pragma pack(push, 1)
class UParticleModuleCollision : public UParticleModuleCollisionBase {
public:
    FRawDistributionVector DampingFactor; // 0x30
    FRawDistributionVector DampingFactorRotation; // 0x78
    FRawDistributionFloat MaxCollisions; // 0xc0
    EParticleCollisionComplete CollisionCompletionOption; // 0xf0
    char pad_f1[0x7];
    TArray<EObjectTypeQuery> CollisionTypes; // 0xf8
    char pad_108[0x8];
    uint8_t bApplyPhysics : 1; // 0x110
    uint8_t bIgnoreTriggerVolumes : 1; // 0x110
    uint8_t pad_bitfield_110_2 : 6;
    char pad_111[0x7];
    FRawDistributionFloat ParticleMass; // 0x118
    float DirScalar; // 0x148
    uint8_t bPawnsDoNotDecrementCount : 1; // 0x14c
    uint8_t bOnlyVerticalNormalsDecrementCount : 1; // 0x14c
    uint8_t pad_bitfield_14c_2 : 6;
    char pad_14d[0x3];
    float VerticalFudgeFactor; // 0x150
    char pad_154[0x4];
    FRawDistributionFloat DelayAmount; // 0x158
    uint8_t bDropDetail : 1; // 0x188
    uint8_t bCollideOnlyIfVisible : 1; // 0x188
    uint8_t bIgnoreSourceActor : 1; // 0x188
    uint8_t pad_bitfield_188_3 : 5;
    char pad_189[0x3];
    float MaxCollisionDistance; // 0x18c
    static UParticleModuleCollision* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
