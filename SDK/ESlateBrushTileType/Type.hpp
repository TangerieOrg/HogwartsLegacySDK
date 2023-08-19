#pragma once
#include <cstdint>
namespace ESlateBrushTileType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoTile = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushTileType_MAX = 4,
};
#pragma pack(pop)
}
