#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECRSimSoftCollisionType : uint8_t {
    Plane = 0,
    Sphere = 1,
    Cone = 2,
    ECRSimSoftCollisionType_MAX = 3,
};
#pragma pack(pop)
