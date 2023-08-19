#pragma once
#include <cstdint>
#include "FStencilManagerSkinFXColor.hpp"
class UClass;
#pragma pack(push, 1)
struct FStencilManagerSkinFX {
    UClass* SkinFX; // 0x0
    FStencilManagerSkinFXColor ForceEmissiveColor; // 0x8
    bool bForceEmissive; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
