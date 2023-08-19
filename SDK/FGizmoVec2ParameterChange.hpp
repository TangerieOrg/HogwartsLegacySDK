#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FGizmoVec2ParameterChange {
    FVector2D InitialValue; // 0x0
    FVector2D CurrentValue; // 0x8
}; // Size: 0x10
#pragma pack(pop)
