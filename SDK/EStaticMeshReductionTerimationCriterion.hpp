#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStaticMeshReductionTerimationCriterion : uint8_t {
    Triangles = 0,
    Vertices = 1,
    Any = 2,
    EStaticMeshReductionTerimationCriterion_MAX = 3,
};
#pragma pack(pop)
