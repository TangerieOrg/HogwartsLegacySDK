#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSortMode : uint8_t {
    None = 0,
    ViewDepth = 1,
    ViewDistance = 2,
    CustomAscending = 3,
    CustomDecending = 4,
    ENiagaraSortMode_MAX = 5,
};
#pragma pack(pop)
