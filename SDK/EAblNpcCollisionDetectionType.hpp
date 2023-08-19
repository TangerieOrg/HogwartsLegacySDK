#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcCollisionDetectionType : uint8_t {
    MoveDirectionDotHitNormal = 0,
    MoveDirectionDotUpVector = 1,
    HitNormalDotUpVector = 2,
    EAblNpcCollisionDetectionType_MAX = 3,
};
#pragma pack(pop)
