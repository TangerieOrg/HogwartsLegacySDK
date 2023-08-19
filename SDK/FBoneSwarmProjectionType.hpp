#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FBoneSwarmProjectionType : uint8_t {
    UseCone = 0,
    SphereDistribution = 1,
    TotalRandom = 2,
    FBoneSwarmProjectionType_MAX = 3,
};
#pragma pack(pop)
