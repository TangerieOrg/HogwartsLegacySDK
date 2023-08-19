#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FWeatherStormState.hpp"
#pragma pack(push, 1)
class AWeatherSurfaceBlueprintBase : public AActor {
public:
    FWeatherStormState StormState; // 0x248
    static AWeatherSurfaceBlueprintBase* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
