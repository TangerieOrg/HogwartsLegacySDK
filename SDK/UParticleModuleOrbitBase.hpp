#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleOrbitBase : public UParticleModule {
public:
    uint8_t bUseEmitterTime : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    static UParticleModuleOrbitBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
