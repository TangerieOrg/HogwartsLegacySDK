#pragma once
#include <cstdint>
#include "FBonySkeletonAudioEvent.hpp"
#include "FBonySkeletonTimer.hpp"
class UParticleSystem;
class UClass;
#pragma pack(push, 1)
struct FBonySkeletonTimerProfile {
    FName ProfileName; // 0x0
    FBonySkeletonTimer ShowSkeletonTimer; // 0x8
    FBonySkeletonTimer HideNonSkeletonTimer; // 0x10
    FBonySkeletonTimer ParticleStartTimer; // 0x18
    UParticleSystem* Particle; // 0x20
    TArray<FName> ParticleFXBones; // 0x28
    FBonySkeletonTimer SkinFXStartTimer; // 0x38
    UClass* SkinFXEffect; // 0x40
    TArray<FBonySkeletonAudioEvent> AudioEvents; // 0x48
}; // Size: 0x58
#pragma pack(pop)
