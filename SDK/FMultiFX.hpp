#pragma once
#include <cstdint>
#include "FMultiVfxSfx.hpp"
class UClass;
#pragma pack(push, 1)
struct FMultiFX : public FMultiVfxSfx {
    UClass* SkinFX; // 0x28
}; // Size: 0x30
#pragma pack(pop)
