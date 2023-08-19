#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EIKDriver_GroundAdjustment_TraceShape : uint8_t {
    Line = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
    EIKDriver_GroundAdjustment_MAX = 4,
};
#pragma pack(pop)
