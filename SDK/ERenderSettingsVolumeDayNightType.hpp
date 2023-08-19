#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsVolumeDayNightType : uint8_t {
    DayAndNight = 0,
    DayOnly = 1,
    NightOnly = 2,
    ERenderSettingsVolumeDayNightType_MAX = 3,
};
#pragma pack(pop)
