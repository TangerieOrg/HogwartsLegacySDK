#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESplitNormalMethod : uint8_t {
    UseExistingTopology = 0,
    FaceNormalThreshold = 1,
    FaceGroupID = 2,
    PerTriangle = 3,
    PerVertex = 4,
    ESplitNormalMethod_MAX = 5,
};
#pragma pack(pop)
