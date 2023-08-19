#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties {
public:
    float Width; // 0x70
    float Depth; // 0x74
    int32_t WidthSubdivisions; // 0x78
    int32_t DepthSubdivisions; // 0x7c
    static UProceduralRectangleToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
