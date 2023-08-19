#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralConeToolProperties : public UProceduralShapeToolProperties {
public:
    float Radius; // 0x70
    float Height; // 0x74
    int32_t RadialSlices; // 0x78
    int32_t HeightSubdivisions; // 0x7c
    static UProceduralConeToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
