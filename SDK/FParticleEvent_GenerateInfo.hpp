#pragma once
#include <cstdint>
#include "EParticleEventType.hpp"
class UParticleModuleEventSendToGame;
#pragma pack(push, 1)
struct FParticleEvent_GenerateInfo {
    EParticleEventType Type; // 0x0
    char pad_1[0x3];
    int32_t Frequency; // 0x4
    int32_t ParticleFrequency; // 0x8
    uint8_t FirstTimeOnly : 1; // 0xc
    uint8_t LastTimeOnly : 1; // 0xc
    uint8_t UseReflectedImpactVector : 1; // 0xc
    uint8_t bUseOrbitOffset : 1; // 0xc
    uint8_t pad_bitfield_c_4 : 4;
    char pad_d[0x3];
    FName CustomName; // 0x10
    TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18
}; // Size: 0x28
#pragma pack(pop)
