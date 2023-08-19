#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureSourceArtType {
    TSAT_Uncompressed = 0,
    TSAT_PNGCompressed = 1,
    TSAT_DDSFile = 2,
    TSAT_MAX = 3,
};
#pragma pack(pop)
