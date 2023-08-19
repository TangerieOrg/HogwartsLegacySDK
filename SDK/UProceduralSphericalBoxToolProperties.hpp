#pragma once
#include <cstdint>
#include "UProceduralShapeToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties {
public:
    float Radius; // 0x70
    int32_t Subdivisions; // 0x74
    static UProceduralSphericalBoxToolProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
