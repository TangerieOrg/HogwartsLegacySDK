#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UCurveBase.hpp"
#pragma pack(push, 1)
class UCurveFloat : public UCurveBase {
public:
    FRichCurve FloatCurve; // 0x30
    bool bIsEventCurve; // 0xb0
    char pad_b1[0x7];
    static UCurveFloat* StaticClass();
    float GetFloatValue(float InTime);
}; // Size: 0xb8
#pragma pack(pop)
