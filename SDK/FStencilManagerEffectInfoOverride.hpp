#pragma once
#include <cstdint>
#include "EStencilManagerPreferredEffect.hpp"
#include "FLocalStencilEffect.hpp"
#include "FStencilManagerEffectName.hpp"
#include "FStencilManagerGroupName.hpp"
#include "FStencilManagerSkinFX.hpp"
#pragma pack(push, 1)
struct FStencilManagerEffectInfoOverride {
    FStencilManagerEffectName Effect; // 0x0
    FStencilManagerGroupName GroupOverride; // 0x8
    EStencilManagerPreferredEffect PreferredEffect; // 0x10
    char pad_11[0x7];
    FLocalStencilEffect LocalDepthFX; // 0x18
    FStencilManagerSkinFX SkinFX; // 0x1e8
    bool bUseGroupOverride; // 0x210
    char pad_211[0x7];
}; // Size: 0x218
#pragma pack(pop)
