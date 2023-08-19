#pragma once
#include <cstdint>
namespace EAttenuationShape {
#pragma pack(push, 1)
enum Type : uint8_t {
    Sphere = 0,
    Capsule = 1,
    Box = 2,
    Cone = 3,
    EAttenuationShape_MAX = 4,
};
#pragma pack(pop)
}
