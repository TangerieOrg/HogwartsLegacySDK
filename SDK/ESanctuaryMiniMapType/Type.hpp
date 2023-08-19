#pragma once
#include <cstdint>
namespace ESanctuaryMiniMapType {
#pragma pack(push, 1)
enum Type : uint8_t {
    MINIMAP_TYPE_NONE = 0,
    MINIMAP_TYPE_HUB = 1,
    MINIMAP_TYPE_GRASSLAND = 2,
    MINIMAP_TYPE_FOREST = 3,
    MINIMAP_TYPE_COAST = 4,
    MINIMAP_TYPE_SWAMP = 5,
    MINIMAP_TYPE_STUDY = 6,
    MINIMAP_TYPE_MAX = 7,
};
#pragma pack(pop)
}
