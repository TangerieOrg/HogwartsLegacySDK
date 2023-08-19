#pragma once
#include <cstdint>
#include "FWeatherDecalParameters.hpp"
#include "UWeatherDecalSettings.hpp"
#pragma pack(push, 1)
class UWeatherDecalSettingsParameters : public UWeatherDecalSettings {
public:
    FWeatherDecalParameters Parameters; // 0x28
    static UWeatherDecalSettingsParameters* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
