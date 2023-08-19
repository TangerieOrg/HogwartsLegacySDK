#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "FVector.hpp"
#include "UCurveBase.hpp"
#pragma pack(push, 1)
class UCurveVector : public UCurveBase {
public:
    FRichCurve FloatCurves[3]; // 0x30
    static UCurveVector* StaticClass();
    FVector GetVectorValue(float InTime);
}; // Size: 0x1b0
#pragma pack(pop)
