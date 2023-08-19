#pragma once
#include <cstdint>
#include "EGroomGeometryType.hpp"
#pragma pack(push, 1)
struct FHairLODSettings {
    float CurveDecimation; // 0x0
    float VertexDecimation; // 0x4
    float AngularThreshold; // 0x8
    float ScreenSize; // 0xc
    float ThicknessScale; // 0x10
    bool bVisible; // 0x14
    EGroomGeometryType GeometryType; // 0x15
    char pad_16[0x2];
}; // Size: 0x18
#pragma pack(pop)
