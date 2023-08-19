#pragma once
#include <cstdint>
#include "FVolumetricCloudsGroundShadowsRoilParams.hpp"
class UMaterialInterface;
class UMaterialParameterCollection;
class UCurveFloat;
#pragma pack(push, 1)
struct FVolumetricCloudsGroundShadowsParams {
    UMaterialInterface* Material; // 0x0
    UMaterialParameterCollection* MPC; // 0x8
    float LightFunctionScaleFactor; // 0x10
    float Opacity; // 0x14
    float Sharpening; // 0x18
    float WindMultiplier; // 0x1c
    UCurveFloat* DensityVsPreMultiply; // 0x20
    UCurveFloat* HardnessVsLightHeight; // 0x28
    FVolumetricCloudsGroundShadowsRoilParams Roil; // 0x30
    bool bModulateByLightHeight; // 0x58
    char pad_59[0x7];
}; // Size: 0x60
#pragma pack(pop)
