#pragma once
#include <cstdint>
#include "ENiagraWaterRippleCurveProperty.hpp"
#include "UMultiFX2_Filtered.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UMultiFX2_Water_Ripple_Curve : public UMultiFX2_Filtered {
public:
    ENiagraWaterRippleCurveProperty SourceProperty; // 0x68
    char pad_69[0x7];
    UCurveFloat* CurveRadius; // 0x70
    UCurveFloat* CurveIntensity; // 0x78
    UCurveFloat* CurveDuration; // 0x80
    static UMultiFX2_Water_Ripple_Curve* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
