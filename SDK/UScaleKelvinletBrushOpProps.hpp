#pragma once
#include <cstdint>
#include "UBaseKelvinletBrushOpProps.hpp"
#pragma pack(push, 1)
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps {
public:
    float Strength; // 0x70
    float Falloff; // 0x74
    static UScaleKelvinletBrushOpProps* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
