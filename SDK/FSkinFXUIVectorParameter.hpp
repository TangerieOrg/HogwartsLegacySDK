#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSkinFXMaterialVectorProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXUIVectorParameter {
    FSkinFXMaterialVectorProperty Parameter; // 0x0
    FLinearColor Value; // 0x8
}; // Size: 0x18
#pragma pack(pop)
