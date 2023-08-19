#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostCalculationRoundingType : uint8_t {
    RoundToNearest = 0,
    TowardsZero = 1,
    AwayFromZero = 2,
    EPostCalculationRoundingType_MAX = 3,
};
#pragma pack(pop)
