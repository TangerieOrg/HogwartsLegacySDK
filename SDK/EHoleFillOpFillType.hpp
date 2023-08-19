#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoleFillOpFillType : uint8_t {
    TriangleFan = 0,
    PolygonEarClipping = 1,
    Planar = 2,
    Minimal = 3,
    Smooth = 4,
    EHoleFillOpFillType_MAX = 5,
};
#pragma pack(pop)
