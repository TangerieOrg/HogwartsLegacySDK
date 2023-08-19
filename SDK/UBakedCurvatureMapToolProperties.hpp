#pragma once
#include <cstdint>
#include "EBakedCurvatureClampMode.hpp"
#include "EBakedCurvatureColorMode.hpp"
#include "EBakedCurvatureTypeMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet {
public:
    EBakedCurvatureTypeMode CurvatureType; // 0x60
    EBakedCurvatureColorMode ColorMode; // 0x64
    float RangeMultiplier; // 0x68
    float MinRangeMultiplier; // 0x6c
    EBakedCurvatureClampMode Clamping; // 0x70
    bool bGaussianBlur; // 0x74
    char pad_75[0x3];
    float BlurRadius; // 0x78
    char pad_7c[0x4];
    static UBakedCurvatureMapToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
