#pragma once
#include <cstdint>
#include "UMeshSculptBrushOpProps.hpp"
#pragma pack(push, 1)
class UMoveBrushOpProps : public UMeshSculptBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    float Depth; // 0x68
    char pad_6c[0x4];
    static UMoveBrushOpProps* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
