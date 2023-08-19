#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class UParticleSystem;
#pragma pack(push, 1)
struct FMappedTimedParticleEffect {
    UParticleSystem* PSTemplate; // 0x0
    FVector LocationOffset; // 0x8
    FRotator RotationOffset; // 0x14
    bool bDestroyAtEnd; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
