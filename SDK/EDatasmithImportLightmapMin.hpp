#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportLightmapMin : uint8_t {
    LIGHTMAP_16 = 0,
    LIGHTMAP_32 = 1,
    LIGHTMAP_64 = 2,
    LIGHTMAP_128 = 3,
    LIGHTMAP_256 = 4,
    LIGHTMAP_512 = 5,
    LIGHTMAP_MAX = 6,
};
#pragma pack(pop)
