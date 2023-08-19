#pragma once
#include <cstdint>
#include "UMeshSculptBrushOpProps.hpp"
#pragma pack(push, 1)
class UInflateBrushOpProps : public UMeshSculptBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    static UInflateBrushOpProps* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
