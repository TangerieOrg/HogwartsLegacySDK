#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrawPolyPathExtrudeDirection : int32_t {
    SelectionNormal = 0,
    WorldX = 1,
    WorldY = 2,
    WorldZ = 3,
    LocalX = 4,
    LocalY = 5,
    LocalZ = 6,
    EDrawPolyPathExtrudeDirection_MAX = 7,
};
#pragma pack(pop)
