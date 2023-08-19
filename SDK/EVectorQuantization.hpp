#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVectorQuantization : uint8_t {
    RoundWholeNumber = 0,
    RoundOneDecimal = 1,
    RoundTwoDecimals = 2,
    EVectorQuantization_MAX = 3,
};
#pragma pack(pop)
