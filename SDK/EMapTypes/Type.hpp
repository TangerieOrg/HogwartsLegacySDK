#pragma once
#include <cstdint>
namespace EMapTypes {
#pragma pack(push, 1)
enum Type : uint8_t {
    MAP_TYPE_NONE = 0,
    MAP_TYPE_OVERLAND = 1,
    MAP_TYPE_DUNGEON = 2,
    MAP_TYPE_HOGWARTS = 3,
    MAP_TYPE_HOGSMEADE = 4,
    MAP_TYPE_SANCTUARY = 5,
    MAP_TYPE_TENT = 6,
    MAP_TYPE_TUTORIAL = 7,
    MAP_TYPE_MAX = 8,
};
#pragma pack(pop)
}
