#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FRuntimeFloatCurve {
    FRichCurve EditorCurveData; // 0x0
    UCurveFloat* ExternalCurve; // 0x80
}; // Size: 0x88
#pragma pack(pop)
