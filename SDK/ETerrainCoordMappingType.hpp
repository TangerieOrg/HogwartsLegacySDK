#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETerrainCoordMappingType : uint8_t {
    TCMT_Auto = 0,
    TCMT_XY = 1,
    TCMT_XZ = 2,
    TCMT_YZ = 3,
    TCMT_MAX = 4,
};
#pragma pack(pop)
