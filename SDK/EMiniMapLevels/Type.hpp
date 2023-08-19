#pragma once
#include <cstdint>
namespace EMiniMapLevels {
#pragma pack(push, 1)
enum Type : uint8_t {
    MINI_MAP_LEVEL_OVERLAND = 0,
    MINI_MAP_LEVEL_HOGWARTS = 1,
    MINI_MAP_LEVEL_HOGSMEADE = 2,
    MINI_MAP_LEVEL_DUNGEON = 3,
    MINI_MAP_LEVEL_TUTORIAL = 4,
    MINI_MAP_LEVEL_SANCTUARY = 5,
    MINI_MAP_LEVEL_TENTS = 6,
    MINI_MAP_LEVEL_NONE = 7,
    MINI_MAP_LEVEL_MAX = 8,
};
#pragma pack(pop)
}
