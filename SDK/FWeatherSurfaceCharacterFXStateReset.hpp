#pragma once
#include <cstdint>
#include "EWeatherSurfaceCharacterFXStateResetType.hpp"
#pragma pack(push, 1)
struct FWeatherSurfaceCharacterFXStateReset {
    EWeatherSurfaceCharacterFXStateResetType IndoorsReset; // 0x0
    EWeatherSurfaceCharacterFXStateResetType OutdoorsReset; // 0x1
}; // Size: 0x2
#pragma pack(pop)
