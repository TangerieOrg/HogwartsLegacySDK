#pragma once
#include <cstdint>
#include "EParticleCollisionMode\Type.hpp"
#include "EParticleCollisionResponse\Type.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleCollisionBase.hpp"
#pragma pack(push, 1)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase {
public:
    FRawDistributionFloat Resilience; // 0x30
    FRawDistributionFloat ResilienceScaleOverLife; // 0x60
    float Friction; // 0x90
    float RandomSpread; // 0x94
    float RandomDistribution; // 0x98
    float RadiusScale; // 0x9c
    float RadiusBias; // 0xa0
    EParticleCollisionResponse::Type Response; // 0xa4
    EParticleCollisionMode::Type CollisionMode; // 0xa5
    char pad_a6[0x2];
    static UParticleModuleCollisionGPU* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
