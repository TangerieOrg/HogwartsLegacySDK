#pragma once
#include <cstdint>
namespace ETwoPlayerSplitScreenType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Horizontal = 0,
    Vertical = 1,
    ETwoPlayerSplitScreenType_MAX = 2,
};
#pragma pack(pop)
}
