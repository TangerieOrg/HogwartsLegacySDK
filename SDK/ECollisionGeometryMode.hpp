#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECollisionGeometryMode : int32_t {
    Default = 0,
    SimpleAndComplex = 1,
    UseSimpleAsComplex = 2,
    UseComplexAsSimple = 3,
    ECollisionGeometryMode_MAX = 4,
};
#pragma pack(pop)
