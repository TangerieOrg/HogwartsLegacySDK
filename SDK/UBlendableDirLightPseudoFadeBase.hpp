#pragma once
#include <cstdint>
#include "EDayNightTweakDirectionalLightMode.hpp"
#include "UGlobalLightingBlendable.hpp"
#pragma pack(push, 1)
class UBlendableDirLightPseudoFadeBase : public UGlobalLightingBlendable {
public:
    EDayNightTweakDirectionalLightMode Mode; // 0x28
    char pad_29[0x7];
    static UBlendableDirLightPseudoFadeBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
