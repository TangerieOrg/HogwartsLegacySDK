#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EClusterConnectionTypeEnum : uint8_t {
    Chaos_PointImplicit = 0,
    Chaos_DelaunayTriangulation = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
    Chaos_None = 4,
    Chaos_EClsuterCreationParameters_Max = 5,
    Chaos_MAX = 6,
};
#pragma pack(pop)
