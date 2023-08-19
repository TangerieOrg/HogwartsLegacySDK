#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "FVector2D.hpp"
#include "UCurveBase.hpp"
#pragma pack(push, 1)
class UCurveVector2D : public UCurveBase {
public:
    FRichCurve FloatCurves[2]; // 0x30
    static UCurveVector2D* StaticClass();
    FVector2D GetVector2DValue(float InTime);
}; // Size: 0x130
#pragma pack(pop)
