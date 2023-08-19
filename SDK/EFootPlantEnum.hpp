#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFootPlantEnum : uint8_t {
    FOOTPLANT_NONE = 0,
    FOOTPLANT_LEFT = 1,
    FOOTPLANT_RIGHT = 2,
    FOOTPLANT_BOTH = 3,
    FOOTPLANT_UNAVAILABLE = 4,
    FOOTPLANT_MAX = 5,
};
#pragma pack(pop)
