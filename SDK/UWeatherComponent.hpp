#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UWeatherComponent : public USceneComponent {
public:
    char pad_220[0x8];
    TArray<AActor*> WeatherCoverageArray; // 0x228
    char pad_238[0x8];
    static UWeatherComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
