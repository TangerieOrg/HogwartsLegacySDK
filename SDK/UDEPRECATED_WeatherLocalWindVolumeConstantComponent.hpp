#pragma once
#include <cstdint>
#include "FWindParametersInstant.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#pragma pack(push, 1)
class UDEPRECATED_WeatherLocalWindVolumeConstantComponent : public UDEPRECATED_WeatherLocalWindComponent {
public:
    char pad_270[0x10];
    static UDEPRECATED_WeatherLocalWindVolumeConstantComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
