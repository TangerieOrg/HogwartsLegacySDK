#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class UParticleSystem;
#pragma pack(push, 1)
struct FMappedParticleEffect {
    UParticleSystem* PSTemplate; // 0x0
    FVector LocationOffset; // 0x8
    FRotator RotationOffset; // 0x14
    FVector Scale; // 0x20
    char pad_2c[0x14];
}; // Size: 0x40
#pragma pack(pop)
