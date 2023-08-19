#pragma once
#include <cstdint>
#include "FFloatCurve.hpp"
#pragma pack(push, 1)
struct FRawCurveTracks {
    TArray<FFloatCurve> FloatCurves; // 0x0
}; // Size: 0x10
#pragma pack(pop)
