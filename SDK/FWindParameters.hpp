#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FWindParametersInstant.hpp"
#pragma pack(push, 1)
struct FWindParameters : public FWindParametersInstant {
    FRuntimeFloatCurve ModAngle; // 0x10
    FRuntimeFloatCurve ModSpeed; // 0x98
    bool bLoopModAngle; // 0x120
    bool bLoopModSpeed; // 0x121
    char pad_122[0x6];
}; // Size: 0x128
#pragma pack(pop)
