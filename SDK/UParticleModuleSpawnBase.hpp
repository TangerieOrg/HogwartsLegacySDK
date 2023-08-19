#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleSpawnBase : public UParticleModule {
public:
    uint8_t bProcessSpawnRate : 1; // 0x30
    uint8_t bProcessBurstList : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x7];
    static UParticleModuleSpawnBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
