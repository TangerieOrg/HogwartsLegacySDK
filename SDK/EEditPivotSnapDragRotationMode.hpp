#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEditPivotSnapDragRotationMode : uint8_t {
    Ignore = 0,
    Align = 1,
    AlignFlipped = 2,
    LastValue = 3,
    EEditPivotSnapDragRotationMode_MAX = 4,
};
#pragma pack(pop)
