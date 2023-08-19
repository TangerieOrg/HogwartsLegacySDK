#pragma once
#include <cstdint>
#include "FWindParameters.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#pragma pack(push, 1)
class UDEPRECATED_WeatherLocalWindVolumeParametersComponent : public UDEPRECATED_WeatherLocalWindComponent {
public:
    char pad_270[0x120];
    static UDEPRECATED_WeatherLocalWindVolumeParametersComponent* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
