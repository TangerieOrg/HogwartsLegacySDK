#pragma once
#include <cstdint>
#include "EPlaneBrushSideMode.hpp"
#include "UMeshSculptBrushOpProps.hpp"
#pragma pack(push, 1)
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    float Depth; // 0x68
    EPlaneBrushSideMode WhichSide; // 0x6c
    char pad_6d[0x3];
    static UFlattenBrushOpProps* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
