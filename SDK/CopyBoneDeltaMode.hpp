#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class CopyBoneDeltaMode : uint8_t {
    Accumulate = 0,
    Copy = 1,
    CopyBoneDeltaMode_MAX = 2,
};
#pragma pack(pop)
