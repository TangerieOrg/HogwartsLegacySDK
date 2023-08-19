#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRichCurve.hpp"
#include "UCurveBase.hpp"
#pragma pack(push, 1)
class UCurveLinearColor : public UCurveBase {
public:
    FRichCurve FloatCurves[4]; // 0x30
    float AdjustHue; // 0x230
    float AdjustSaturation; // 0x234
    float AdjustBrightness; // 0x238
    float AdjustBrightnessCurve; // 0x23c
    float AdjustVibrance; // 0x240
    float AdjustMinAlpha; // 0x244
    float AdjustMaxAlpha; // 0x248
    char pad_24c[0x4];
    static UCurveLinearColor* StaticClass();
    FLinearColor GetUnadjustedLinearColorValue(float InTime);
    FLinearColor GetLinearColorValue(float InTime);
    FLinearColor GetClampedLinearColorValue(float InTime);
}; // Size: 0x250
#pragma pack(pop)
