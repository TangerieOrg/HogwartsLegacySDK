#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EClusterUnionMethod : uint8_t {
    PointImplicit = 0,
    DelaunayTriangulation = 1,
    MinimalSpanningSubsetDelaunayTriangulation = 2,
    PointImplicitAugmentedWithMinimalDelaunay = 3,
    None = 4,
    EClusterUnionMethod_MAX = 5,
};
#pragma pack(pop)
