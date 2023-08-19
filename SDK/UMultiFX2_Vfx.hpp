#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UParticleSystem;
#pragma pack(push, 1)
class UMultiFX2_Vfx : public UMultiFX2_Filtered {
public:
    UParticleSystem* VFX; // 0x68
    bool bAttached; // 0x70
    bool bIgnoreDeactivate; // 0x71
    char pad_72[0x6];
    static UMultiFX2_Vfx* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
