#pragma once
#include <cstdint>
#include "FLerpParameterAtlas.hpp"
#pragma pack(push, 1)
struct FNightLightRigLerpParameterAtlas {
    FLerpParameterAtlas LerpAtlas; // 0x0
    float LerpT; // 0x90
    char pad_94[0x4];
}; // Size: 0x98
#pragma pack(pop)
