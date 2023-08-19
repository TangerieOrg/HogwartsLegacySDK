#pragma once
#include <cstdint>
#include "FFullWeatherState.hpp"
#include "FWeatherIndoors.hpp"
#include "FWeatherTime.hpp"
#include "FWeatherWindDirectionalSourceStack.hpp"
#include "FWindDetails.hpp"
#include "FWindParametersInstant.hpp"
#include "FWorldWindOffset.hpp"
class UWeatherWindDirectionalSourceComponentBase;
class UWeatherOrphanComponent;
#pragma pack(push, 1)
struct FWeatherActionContext {
    FFullWeatherState PriorState; // 0x0
    FFullWeatherState CurrentState; // 0x3f8
    FWeatherTime CurrentTime; // 0x7f0
    TArray<UWeatherWindDirectionalSourceComponentBase*> WindSources; // 0x858
    FWindParametersInstant Wind; // 0x868
    FWindDetails WindDetails; // 0x878
    FWorldWindOffset WindOffset; // 0x898
    FWeatherIndoors WeatherIndoors; // 0x8ac
    TArray<UWeatherOrphanComponent*> LightingOrphans; // 0x8c0
    FWeatherWindDirectionalSourceStack LegacyWindSourceStack; // 0x8d0
}; // Size: 0x8e0
#pragma pack(pop)
