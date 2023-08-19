#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETrailWidthMode : uint8_t {
    ETrailWidthMode_FromCentre = 0,
    ETrailWidthMode_FromFirst = 1,
    ETrailWidthMode_FromSecond = 2,
    ETrailWidthMode_MAX = 3,
};
#pragma pack(pop)
