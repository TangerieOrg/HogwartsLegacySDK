#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AnimPhysCollisionType : uint8_t {
    CoM = 0,
    CustomSphere = 1,
    InnerSphere = 2,
    OuterSphere = 3,
    AnimPhysCollisionType_MAX = 4,
};
#pragma pack(pop)
