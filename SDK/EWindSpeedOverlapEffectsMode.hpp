#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindSpeedOverlapEffectsMode : uint8_t {
    IndoorsAndOutdoors = 0,
    IndoorsOnly = 1,
    OutdoorsOnly = 2,
    EWindSpeedOverlapEffectsMode_MAX = 3,
};
#pragma pack(pop)
