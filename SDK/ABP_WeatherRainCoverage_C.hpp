#pragma once
#include <cstdint>
#include "AWeatherCoverageBlueprint.hpp"
class UStaticMeshComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_WeatherRainCoverage_C : public AWeatherCoverageBlueprint {
public:
    UStaticMeshComponent* Plane; // 0x268
    UNiagaraComponent* N_Coverage_Drops; // 0x270
    static ABP_WeatherRainCoverage_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
