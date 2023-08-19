#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties {
public:
    float Radius; // 0x70
    int32_t LatitudeSlices; // 0x74
    int32_t LongitudeSlices; // 0x78
    char pad_7c[0x4];
    static UProceduralSphereToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
