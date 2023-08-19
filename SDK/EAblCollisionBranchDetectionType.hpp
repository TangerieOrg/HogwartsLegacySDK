#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblCollisionBranchDetectionType : uint8_t {
    MoveDirectionDotHitNormal = 0,
    MoveDirectionDotUpVector = 1,
    HitNormalDotUpVector = 2,
    EAblCollisionBranchDetectionType_MAX = 3,
};
#pragma pack(pop)
