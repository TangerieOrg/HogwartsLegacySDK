#pragma once
#include <cstdint>
#include "UMeshSculptBrushOpProps.hpp"
#pragma pack(push, 1)
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps {
public:
    float Stiffness; // 0x60
    float Incompressiblity; // 0x64
    int32_t BrushSteps; // 0x68
    char pad_6c[0x4];
    static UBaseKelvinletBrushOpProps* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
