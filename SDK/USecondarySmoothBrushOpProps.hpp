#pragma once
#include <cstdint>
#include "UBaseSmoothBrushOpProps.hpp"
#pragma pack(push, 1)
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps {
public:
    float Strength; // 0x60
    float Falloff; // 0x64
    bool bPreserveUVFlow; // 0x68
    char pad_69[0x7];
    static USecondarySmoothBrushOpProps* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
