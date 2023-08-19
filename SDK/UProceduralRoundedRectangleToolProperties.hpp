#pragma once
#include <cstdint>
#include "UProceduralRectangleToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties {
public:
    float CornerRadius; // 0x80
    int32_t CornerSlices; // 0x84
    static UProceduralRoundedRectangleToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
