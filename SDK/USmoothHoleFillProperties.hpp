#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USmoothHoleFillProperties : public UInteractiveToolPropertySet {
public:
    bool bConstrainToHoleInterior; // 0x60
    char pad_61[0x3];
    int32_t RemeshingExteriorRegionWidth; // 0x64
    int32_t SmoothingExteriorRegionWidth; // 0x68
    int32_t SmoothingInteriorRegionWidth; // 0x6c
    float InteriorSmoothness; // 0x70
    char pad_74[0x4];
    double FillDensityScalar; // 0x78
    bool bProjectDuringRemesh; // 0x80
    char pad_81[0x7];
    static USmoothHoleFillProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
