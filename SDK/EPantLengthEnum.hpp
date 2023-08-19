#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPantLengthEnum : uint8_t {
    PANT_LENGTH_DRESS = 0,
    PANT_LENGTH_THIGH = 1,
    PANT_LENGTH_KNEE = 2,
    PANT_LENGTH_KNICKER = 3,
    PANT_LENGTH_CALF = 4,
    PANT_LENGTH_SHIN = 5,
    PANT_LENGTH_SHOE = 6,
    PANT_LENGTH_MAX = 7,
};
#pragma pack(pop)
