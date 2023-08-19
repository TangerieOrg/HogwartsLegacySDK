#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESleeveLengthEnum : uint8_t {
    SLEEVE_LENGTH_NOSLEEVES = 0,
    SLEEVE_LENGTH_SHORT = 1,
    SLEEVE_LENGTH_MEDIUM = 2,
    SLEEVE_LENGTH_LONG = 3,
    SLEEVE_LENGTH_MAX = 4,
};
#pragma pack(pop)
