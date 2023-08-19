#pragma once
#include <cstdint>
#include "EOpacitySourceMode.hpp"
#include "ESubUVBoundingVertexCount.hpp"
#include "UObject.hpp"
class UTexture2D;
#pragma pack(push, 1)
class USubUVAnimation : public UObject {
public:
    UTexture2D* SubUVTexture; // 0x28
    int32_t SubImages_Horizontal; // 0x30
    int32_t SubImages_Vertical; // 0x34
    ESubUVBoundingVertexCount BoundingMode; // 0x38
    EOpacitySourceMode OpacitySourceMode; // 0x39
    char pad_3a[0x2];
    float AlphaThreshold; // 0x3c
    char pad_40[0x28];
    static USubUVAnimation* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
