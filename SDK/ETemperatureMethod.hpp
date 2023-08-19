#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETemperatureMethod : uint8_t {
    TEMP_WhiteBalance = 0,
    TEMP_ColorTemperature = 1,
    TEMP_MAX = 2,
};
#pragma pack(pop)
