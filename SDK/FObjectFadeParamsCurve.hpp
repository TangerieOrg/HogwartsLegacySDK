#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FObjectFadeParamsCurve {
    FRuntimeFloatCurve RuntimeCurve; // 0x0
    UCurveFloat* ExternalCurve; // 0x88
}; // Size: 0x90
#pragma pack(pop)
