#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWCullingVolumeRemoveType : int32_t {
    Remove = 0,
    AverageNeighbors = 1,
    EWCullingVolumeRemoveType_MAX = 2,
};
#pragma pack(pop)
