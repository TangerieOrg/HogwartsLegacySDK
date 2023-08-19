#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMakeMeshPivotLocation : uint8_t {
    Base = 0,
    Centered = 1,
    Top = 2,
    EMakeMeshPivotLocation_MAX = 3,
};
#pragma pack(pop)
