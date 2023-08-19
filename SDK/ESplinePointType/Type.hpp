#pragma once
#include <cstdint>
namespace ESplinePointType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Linear = 0,
    Curve = 1,
    Constant = 2,
    CurveClamped = 3,
    CurveCustomTangent = 4,
    ESplinePointType_MAX = 5,
};
#pragma pack(pop)
}
