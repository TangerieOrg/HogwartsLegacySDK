#pragma once
#include <cstdint>
#include "FSkinFXMaterialScalarProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXUIScalarParameter {
    FSkinFXMaterialScalarProperty Parameter; // 0x0
    float Value; // 0x8
}; // Size: 0xc
#pragma pack(pop)
