#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELoadingScreenLocation : uint8_t {
    LSL_None = 0,
    LSL_Frontend = 1,
    LSL_Overland = 2,
    LSL_Hogwarts = 3,
    LSL_Hogsmeade = 4,
    LSL_Sanctuary = 5,
    LSL_Dungeon = 6,
    LSL_MAX = 7,
};
#pragma pack(pop)
