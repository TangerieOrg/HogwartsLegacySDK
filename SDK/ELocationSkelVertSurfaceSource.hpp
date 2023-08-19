#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELocationSkelVertSurfaceSource : uint8_t {
    VERTSURFACESOURCE_Vert = 0,
    VERTSURFACESOURCE_Surface = 1,
    VERTSURFACESOURCE_MAX = 2,
};
#pragma pack(pop)
