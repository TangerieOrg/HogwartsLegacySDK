#pragma once
#include <cstdint>
#include "FWeatherStormState.hpp"
#include "UWeatherDecalTracker.hpp"
class AWeatherAnimationBlueprint;
class AWeatherCoverageBlueprint;
#pragma pack(push, 1)
class UStormWeatherDecalTracker : public UWeatherDecalTracker {
public:
    char pad_50[0x8];
    FWeatherStormState StormState; // 0x58
    AWeatherAnimationBlueprint* AnimationActor; // 0x78
    AWeatherCoverageBlueprint* CoverageActor; // 0x80
    static UStormWeatherDecalTracker* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
