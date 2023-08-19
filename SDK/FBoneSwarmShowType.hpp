#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FBoneSwarmShowType : uint8_t {
    Manual = 0,
    EvenDistribution = 1,
    Random = 2,
    AllAtOnce = 3,
    FBoneSwarmShowType_MAX = 4,
};
#pragma pack(pop)
