#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AnimPhysAngularConstraintType : uint8_t {
    Angular = 0,
    Cone = 1,
    AnimPhysAngularConstraintType_MAX = 2,
};
#pragma pack(pop)
