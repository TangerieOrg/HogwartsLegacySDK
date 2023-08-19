#pragma once
#include <cstdint>
#include "EWeatherSurfaceCharacterFXParameters.hpp"
#pragma pack(push, 1)
struct FWeatherSurfaceCharacterFXParameter {
    FName Parameter; // 0x0
    EWeatherSurfaceCharacterFXParameters Red; // 0x8
    EWeatherSurfaceCharacterFXParameters Green; // 0x9
    EWeatherSurfaceCharacterFXParameters Blue; // 0xa
    EWeatherSurfaceCharacterFXParameters Alpha; // 0xb
    bool bSetParameter; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
