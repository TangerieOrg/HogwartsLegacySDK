#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FWeatherStormState.hpp"
class UWeatherStorm;
#pragma pack(push, 1)
class AWeatherStormFXBase : public AActor {
public:
    UWeatherStorm* WeatherStorm; // 0x248
    float OverrideActivationDistanceMeters; // 0x250
    bool bUseOverrideActivationDistanceMeters; // 0x254
    char pad_255[0x3];
    static AWeatherStormFXBase* StaticClass();
    void OnStormStart(FWeatherStormState StormState);
    void OnStormEnd();
    void IsStorming(bool& bStorming);
    void GetStormState(FWeatherStormState& StormState, bool& bStorming);
}; // Size: 0x258
#pragma pack(pop)
