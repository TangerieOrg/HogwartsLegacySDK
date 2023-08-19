#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportLightmapMax : uint8_t {
    LIGHTMAP_64 = 0,
    LIGHTMAP_128 = 1,
    LIGHTMAP_256 = 2,
    LIGHTMAP_512 = 3,
    LIGHTMAP_1024 = 4,
    LIGHTMAP_2048 = 5,
    LIGHTMAP_4096 = 6,
    LIGHTMAP_MAX = 7,
};
#pragma pack(pop)
