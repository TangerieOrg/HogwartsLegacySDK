#pragma once
#include <cstdint>
#include "FPostProcessExposureValuesEV100.hpp"
#pragma pack(push, 1)
struct FPostProcessExposureValuesEV100FinalBias : public FPostProcessExposureValuesEV100 {
    float AutoExposureCurveBias; // 0x40
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
