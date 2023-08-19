#pragma once
#include <cstdint>
namespace EEnvTestDistance {
#pragma pack(push, 1)
enum Type : uint8_t {
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    DistanceAbsoluteZ = 3,
    EEnvTestDistance_MAX = 4,
};
#pragma pack(pop)
}
