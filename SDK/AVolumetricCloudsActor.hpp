#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDataTableRowHandle.hpp"
#include "FVolumetricCloudsLightingParams.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
class UVolumetricCloudsComponent;
#pragma pack(push, 1)
class AVolumetricCloudsActor : public AActor {
public:
    UVolumetricCloudsComponent* Component; // 0x248
    FDataTableRowHandle Preset; // 0x250
    FVolumetricCloudsLightingParams Lighting; // 0x260
    FVolumetricCloudsWeatherWindParams WeatherWind; // 0x2d0
    float GroundShadowsStrength; // 0x30c
    bool bUsePresetLighting; // 0x310
    bool bUsePresetWeatherWind; // 0x311
    char pad_312[0x6];
    static AVolumetricCloudsActor* StaticClass();
}; // Size: 0x318
#pragma pack(pop)
