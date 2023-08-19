#pragma once
#include <cstdint>
#include "AWeatherStormFXBase.hpp"
#include "FWeatherStormTypeFXSettings.hpp"
#include "FWeatherStormTypeFXSettingsState.hpp"
#pragma pack(push, 1)
class AWeatherStormFXMulti : public AWeatherStormFXBase {
public:
    TArray<FWeatherStormTypeFXSettings> Settings; // 0x258
    TArray<FWeatherStormTypeFXSettingsState> States; // 0x268
    static AWeatherStormFXMulti* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
