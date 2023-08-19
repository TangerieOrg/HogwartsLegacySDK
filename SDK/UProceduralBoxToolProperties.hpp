#pragma once
#include <cstdint>
#include "UProceduralRectangleToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties {
public:
    float Height; // 0x80
    int32_t HeightSubdivisions; // 0x84
    static UProceduralBoxToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
