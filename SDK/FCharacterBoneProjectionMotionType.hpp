#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FCharacterBoneProjectionMotionType : uint8_t {
    Stationary = 0,
    SphericalProjection = 1,
    CapsuleProjection = 2,
    Crawling = 3,
    FCharacterBoneProjectionMotionType_MAX = 4,
};
#pragma pack(pop)
