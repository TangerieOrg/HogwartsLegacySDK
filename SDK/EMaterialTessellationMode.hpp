#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialTessellationMode : uint8_t {
    MTM_NoTessellation = 0,
    MTM_FlatTessellation = 1,
    MTM_PNTriangles = 2,
    MTM_MAX = 3,
};
#pragma pack(pop)
