#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARSpatialMeshUsageFlags : uint8_t {
    NotApplicable = 0,
    Visible = 1,
    Collision = 2,
    EARSpatialMeshUsageFlags_MAX = 3,
};
#pragma pack(pop)
