#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UParticleSystem;
#pragma pack(push, 1)
struct FSTR_CaveInParticleElement {
    UParticleSystem* ParticleSystem_4_40D2E3D543F7B5C89DADF4986191171F; // 0x0
    char pad_8[0x8];
    FTransform Transform_5_9E9C69C24756F4FDBB66DFA34C060AA2; // 0x10
    float Delay_8_14B34BE644938EFBB9102F8804DAC347; // 0x40
    char pad_44[0xc];
}; // Size: 0x50
#pragma pack(pop)
