#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FStencilManagerSkinFXColor {
    FName MaterialParameter; // 0x0
    FLinearColor Color; // 0x8
}; // Size: 0x18
#pragma pack(pop)
