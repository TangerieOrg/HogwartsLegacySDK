#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConjurationContext : uint8_t {
    None = 0,
    Sanctuary = 1,
    Biome_Coastal = 2,
    Biome_Forest = 3,
    Biome_Grassland = 4,
    Biome_Swamp = 5,
    Biome_Tundra = 6,
    DevCustomRoom = 7,
    EConjurationContext_MAX = 8,
};
#pragma pack(pop)
