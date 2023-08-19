#pragma once
#include <cstdint>
namespace EThreePlayerSplitScreenType {
#pragma pack(push, 1)
enum Type : uint8_t {
    FavorTop = 0,
    FavorBottom = 1,
    Vertical = 2,
    Horizontal = 3,
    EThreePlayerSplitScreenType_MAX = 4,
};
#pragma pack(pop)
}
