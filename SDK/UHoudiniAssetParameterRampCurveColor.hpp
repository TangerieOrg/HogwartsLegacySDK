#pragma once
#include <cstdint>
#include "UCurveLinearColor.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterRampCurveColor : public UCurveLinearColor {
public:
    char pad_250[0x18];
    static UHoudiniAssetParameterRampCurveColor* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
