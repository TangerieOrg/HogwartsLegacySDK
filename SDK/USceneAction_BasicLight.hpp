#pragma once
#include <cstdint>
#include "FMultiLightDescription.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneRigActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_BasicLight : public USceneRigActionBase {
public:
    FMultiLightDescription Light; // 0x88
    UTransformProvider* Source; // 0x120
    UTransformProvider* Target; // 0x128
    FRuntimeFloatCurve OnOffCurve; // 0x130
    FRuntimeFloatCurve IntensityCurve; // 0x1b8
    FRuntimeFloatCurve AttenuationCurve; // 0x240
    FRuntimeCurveLinearColor ColorCurve; // 0x2c8
    FRuntimeFloatCurve OuterConeAngleCurve; // 0x4d0
    uint8_t bStationary : 1; // 0x558
    uint8_t bPreviewOnly : 1; // 0x558
    uint8_t bUseOnOffCurve : 1; // 0x558
    uint8_t bUseIntensityCurve : 1; // 0x558
    uint8_t bUseAttenuationCurve : 1; // 0x558
    uint8_t bUseColorCurve : 1; // 0x558
    uint8_t bUseOuterConeAngleCurve : 1; // 0x558
    uint8_t bNormalizeCurvesToInterval : 1; // 0x558
    char pad_559[0x7];
    static USceneAction_BasicLight* StaticClass();
}; // Size: 0x560
#pragma pack(pop)
