#pragma once
#include <cstdint>
class UParticleSystem;
class USoundBase;
#pragma pack(push, 1)
struct FFractureEffect {
    UParticleSystem* ParticleSystem; // 0x0
    USoundBase* Sound; // 0x8
}; // Size: 0x10
#pragma pack(pop)
