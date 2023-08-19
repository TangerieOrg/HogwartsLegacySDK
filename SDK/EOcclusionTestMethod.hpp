#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOcclusionTestMethod : uint8_t {
    PrimaryOcclusionOnly = 0,
    HulaHoop_4 = 1,
    FacingPortal_8 = 2,
    EdgeOnPortal_12 = 3,
    EOcclusionTestMethod_MAX = 4,
};
#pragma pack(pop)
