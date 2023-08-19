#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
class UOverlapEffectsHandlerActorClassHit : public UOverlapEffectsHandlerMinimumSpeedBase {
public:
    char pad_50[0x28];
    EPhysicalSurface SurfaceType; // 0x78
    char pad_79[0x7];
    TArray<UOverlapEffectsHandlerEffect*> Effects; // 0x80
    bool bUseSurfaceType; // 0x90
    char pad_91[0x7];
    static UOverlapEffectsHandlerActorClassHit* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
