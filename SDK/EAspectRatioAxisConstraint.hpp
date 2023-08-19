#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAspectRatioAxisConstraint : uint8_t {
    AspectRatio_MaintainYFOV = 0,
    AspectRatio_MaintainXFOV = 1,
    AspectRatio_MajorAxisFOV = 2,
    AspectRatio_MAX = 3,
};
#pragma pack(pop)
