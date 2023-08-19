#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAxisMapping : uint8_t {
    PositiveX = 0,
    NegativeX = 1,
    PositiveY = 2,
    NegativeY = 3,
    PositiveZ = 4,
    NegativeZ = 5,
    EAxisMapping_MAX = 6,
};
#pragma pack(pop)
