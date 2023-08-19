#pragma once
#include <cstdint>
#include "FWindDefinitionName.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#pragma pack(push, 1)
class UDEPRECATED_WeatherLocalWindVolumePresetComponent : public UDEPRECATED_WeatherLocalWindComponent {
public:
    char pad_270[0x10];
    static UDEPRECATED_WeatherLocalWindVolumePresetComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
