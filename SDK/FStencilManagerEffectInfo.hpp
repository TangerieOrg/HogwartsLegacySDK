#pragma once
#include <cstdint>
#include "EStencilManagerEffectPriority.hpp"
#include "EStencilManagerPreferredEffect.hpp"
#include "FLocalStencilEffect.hpp"
#include "FStencilManagerGroupName.hpp"
#include "FStencilManagerSkinFX.hpp"
#pragma pack(push, 1)
struct FStencilManagerEffectInfo {
    FName Name; // 0x0
    FStencilManagerGroupName Group; // 0x8
    uint32_t LegacyStencilValue; // 0x10
    EStencilManagerEffectPriority Priority; // 0x14
    EStencilManagerPreferredEffect PreferredEffect; // 0x15
    char pad_16[0x2];
    FLocalStencilEffect LocalDepthFX; // 0x18
    FStencilManagerSkinFX SkinFX; // 0x1e8
    bool bDisableOverrides; // 0x210
    char pad_211[0x7];
}; // Size: 0x218
#pragma pack(pop)
