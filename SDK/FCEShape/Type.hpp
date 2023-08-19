#pragma once
#include <cstdint>
namespace FCEShape {
#pragma pack(push, 1)
enum Type : uint8_t {
    Line = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
    FCEShape_MAX = 4,
};
#pragma pack(pop)
}
