#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOffsetMeshToolOffsetType : uint8_t {
    Iterative = 0,
    Implicit = 1,
    EOffsetMeshToolOffsetType_MAX = 2,
};
#pragma pack(pop)
