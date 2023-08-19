#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELerpVolumesInterpolantType : uint8_t {
    Unknown = 0,
    Scalar = 1,
    Integer = 2,
    Vector = 3,
    UnitDirection = 4,
    Color = 5,
    Tag = 6,
    ELerpVolumesInterpolantType_MAX = 7,
};
#pragma pack(pop)
