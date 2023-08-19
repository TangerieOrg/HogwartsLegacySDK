#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESplineType {
    None = 0,
    StaticMesh = 1,
    Skeletal = 2,
    ESplineType_MAX = 3,
};
#pragma pack(pop)
