#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;
#pragma pack(push, 1)
struct FFlockGenerationParameters {
    int32_t Members; // 0x0
    char pad_4[0x4];
    UStaticMesh* MemberMesh; // 0x8
    USkeletalMesh* MemberSkeletalMesh; // 0x10
    bool bSkeletalMesh; // 0x18
    char pad_19[0x7];
    UParticleSystem* MemberParticleSystem; // 0x20
    char pad_28[0x8];
    FTransform MemberParticleSystemTransform; // 0x30
    int32_t PercentageWithParticleSystems; // 0x60
    bool bAllowSkeletalMesh; // 0x64
    char pad_65[0xb];
}; // Size: 0x70
#pragma pack(pop)
