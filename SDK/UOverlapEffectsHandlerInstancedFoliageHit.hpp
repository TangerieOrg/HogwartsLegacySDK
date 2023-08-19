#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
class UOverlapEffectsHandlerInstancedFoliageHit : public UOverlapEffectsHandlerMinimumSpeedBase {
public:
    EPhysicalSurface SurfaceType; // 0x50
    char pad_51[0x7];
    TArray<UOverlapEffectsHandlerEffect*> Effects; // 0x58
    static UOverlapEffectsHandlerInstancedFoliageHit* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
