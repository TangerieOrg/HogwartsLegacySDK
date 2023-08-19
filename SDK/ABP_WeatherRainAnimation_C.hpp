#pragma once
#include <cstdint>
#include "AWeatherAnimationBlueprint.hpp"
class UStaticMeshComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_WeatherRainAnimation_C : public AWeatherAnimationBlueprint {
public:
    UStaticMeshComponent* Plane; // 0x268
    UNiagaraComponent* N_Rain; // 0x270
    static ABP_WeatherRainAnimation_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
