#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVertexOffsetUsageType {
    None = 0,
    PreSkinningOffset = 1,
    PostSkinningOffset = 2,
    EVertexOffsetUsageType_MAX = 3,
};
#pragma pack(pop)
