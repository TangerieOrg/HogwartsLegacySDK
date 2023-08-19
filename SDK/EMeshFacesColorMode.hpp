#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshFacesColorMode : int32_t {
    None = 0,
    ByGroup = 1,
    ByMaterialID = 2,
    ByUVIsland = 3,
    EMeshFacesColorMode_MAX = 4,
};
#pragma pack(pop)
