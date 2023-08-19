#pragma once
#include <cstdint>
#include "UParticleModuleEventReceiverBase.hpp"
#pragma pack(push, 1)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase {
public:
    uint8_t bStopSpawning : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x7];
    static UParticleModuleEventReceiverKillParticles* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
