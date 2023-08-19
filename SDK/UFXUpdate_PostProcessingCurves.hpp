#pragma once
#include <cstdint>
#include "FPostProcessingFXCurveSet.hpp"
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_PostProcessingCurves : public UFXUpdate_Tick {
public:
    FPostProcessingFXCurveSet Curves; // 0x80
    static UFXUpdate_PostProcessingCurves* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
