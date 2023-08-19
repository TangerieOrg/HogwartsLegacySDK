#pragma once
#include <cstdint>
namespace EEnvOverlapShape {
#pragma pack(push, 1)
enum Type : uint8_t {
    Box = 0,
    Sphere = 1,
    Capsule = 2,
    EEnvOverlapShape_MAX = 3,
};
#pragma pack(pop)
}
