#pragma once
#include <cstdint>
#include "FStencilManagerEffectInfoOverride.hpp"
#pragma pack(push, 1)
struct FStencilManagerEffectInfoAccessibilityOverride : public FStencilManagerEffectInfoOverride {
    int32_t HighContrastMode; // 0x218
    char pad_21c[0x4];
}; // Size: 0x220
#pragma pack(pop)
