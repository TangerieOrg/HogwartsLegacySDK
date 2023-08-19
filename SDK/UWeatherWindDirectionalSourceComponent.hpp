#pragma once
#include <cstdint>
#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "UWeatherWindDirectionalSourceInstantComponent.hpp"
#pragma pack(push, 1)
class UWeatherWindDirectionalSourceComponent : public UWeatherWindDirectionalSourceInstantComponent {
public:
    FWindParameters WindParams; // 0x260
    FWindParametersSampleTime SampleTime; // 0x388
    static UWeatherWindDirectionalSourceComponent* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
