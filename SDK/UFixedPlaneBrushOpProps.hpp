#pragma once
#include <cstdint>
#include "EPlaneBrushSideMode.hpp"
#include "UBasePlaneBrushOpProps.hpp"
#pragma pack(push, 1)
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    float Depth; // 0x68
    EPlaneBrushSideMode WhichSide; // 0x6c
    char pad_6d[0x3];
    static UFixedPlaneBrushOpProps* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
