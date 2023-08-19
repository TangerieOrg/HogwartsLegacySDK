#pragma once
#include <cstdint>
namespace EOrientPositionSelector {
#pragma pack(push, 1)
enum Type : uint8_t {
    Orientation = 0,
    Position = 1,
    OrientationAndPosition = 2,
    EOrientPositionSelector_MAX = 3,
};
#pragma pack(pop)
}
