#pragma once
#include <cstdint>
#include "UFXEnd.hpp"
class UParticleSystem;
#pragma pack(push, 1)
class UMultiFX2End_Vfx : public UFXEnd {
public:
    UParticleSystem* VFX; // 0x28
    bool bAttached; // 0x30
    char pad_31[0x7];
    static UMultiFX2End_Vfx* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
