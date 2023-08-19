#pragma once
#include <cstdint>
#include "UParticleModule.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocityBase : public UParticleModule {
public:
    uint8_t bInWorldSpace : 1; // 0x30
    uint8_t bApplyOwnerScale : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x7];
    static UParticleModuleVelocityBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
