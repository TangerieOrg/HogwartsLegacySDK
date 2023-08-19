#pragma once
#include <cstdint>
#include "UBaseKelvinletBrushOpProps.hpp"
#pragma pack(push, 1)
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps {
public:
    float Falloff; // 0x70
    float Depth; // 0x74
    static UPullKelvinletBrushOpProps* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
