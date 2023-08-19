#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBrushType : uint8_t {
    Brush_Default = 0,
    Brush_Add = 1,
    Brush_Subtract = 2,
    Brush_MAX = 3,
};
#pragma pack(pop)
