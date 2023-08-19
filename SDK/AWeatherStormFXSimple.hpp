#pragma once
#include <cstdint>
#include "AWeatherStormFXBase.hpp"
#include "FWeatherStormTypeFXSettings.hpp"
#include "FWeatherStormTypeFXSettingsState.hpp"
#pragma pack(push, 1)
class AWeatherStormFXSimple : public AWeatherStormFXBase {
public:
    FWeatherStormTypeFXSettings Settings; // 0x258
    FWeatherStormTypeFXSettingsState State; // 0x278
    static AWeatherStormFXSimple* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
