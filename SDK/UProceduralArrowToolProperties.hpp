#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties {
public:
    float ShaftRadius; // 0x70
    float ShaftHeight; // 0x74
    float HeadRadius; // 0x78
    float HeadHeight; // 0x7c
    int32_t RadialSlices; // 0x80
    int32_t TotalSubdivisions; // 0x84
    static UProceduralArrowToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
