#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERTDrawingType {
    RTAtlas = 0,
    RTAtlasToNonAtlas = 1,
    RTNonAtlasToAtlas = 2,
    RTNonAtlas = 3,
    RTMips = 4,
    ERTDrawingType_MAX = 5,
};
#pragma pack(pop)
