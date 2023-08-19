#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput ScatteringCoefficients; // 0x40
    FExpressionInput AbsorptionCoefficients; // 0x54
    FExpressionInput PhaseG; // 0x68
    FExpressionInput ColorScaleBehindWater; // 0x7c
    static UMaterialExpressionSingleLayerWaterMaterialOutput* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
