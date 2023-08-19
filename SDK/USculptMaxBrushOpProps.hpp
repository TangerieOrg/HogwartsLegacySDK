#pragma once
#include <cstdint>
#include "UMeshSculptBrushOpProps.hpp"
#pragma pack(push, 1)
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    float MaxHeight; // 0x68
    bool bUseFixedHeight; // 0x6c
    char pad_6d[0x3];
    float FixedHeight; // 0x70
    char pad_74[0x4];
    static USculptMaxBrushOpProps* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
