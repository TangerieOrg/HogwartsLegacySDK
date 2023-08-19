#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties {
public:
    float MajorRadius; // 0x70
    float MinorRadius; // 0x74
    int32_t TubeSlices; // 0x78
    int32_t CrossSectionSlices; // 0x7c
    static UProceduralTorusToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
