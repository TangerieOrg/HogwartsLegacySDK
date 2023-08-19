#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELandscapeClearMode {
    Clear_Weightmap = 1,
    Clear_Heightmap = 2,
    Clear_All = 3,
    Clear_MAX = 4,
};
#pragma pack(pop)
