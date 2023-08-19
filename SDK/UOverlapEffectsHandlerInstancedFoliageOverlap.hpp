#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
class UOverlapEffectsHandlerInstancedFoliageOverlap : public UOverlapEffectsHandlerMinimumSpeedBase {
public:
    TArray<UOverlapEffectsHandlerEffect*> BeginEffects; // 0x50
    TArray<UOverlapEffectsHandlerEffect*> EndEffects; // 0x60
    static UOverlapEffectsHandlerInstancedFoliageOverlap* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
