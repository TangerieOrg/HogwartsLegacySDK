#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSurfaceCharacterFXWetState : uint8_t {
    Dry = 0,
    FirstWet = 1,
    Wet = 2,
    FirstDry = 3,
    EWeatherSurfaceCharacterFXWetState_MAX = 4,
};
#pragma pack(pop)
