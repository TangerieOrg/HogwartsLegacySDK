#pragma once
#include <cstdint>
#include "FLastRenderedExposure.hpp"
#include "FPostProcessExposureValuesEV100FinalBias.hpp"
class UWorld;
#pragma pack(push, 1)
struct FExposureExpressionsExecuteContext {
    UWorld* World; // 0x0
    uint32_t Timestamp; // 0x8
    char pad_c[0x4];
    FPostProcessExposureValuesEV100FinalBias Exposure; // 0x10
    FLastRenderedExposure LastExposure; // 0x58
    FLastRenderedExposure LastExposureFiltered; // 0x78
    FLastRenderedExposure LastExposureHistory; // 0x98
    float NightDay; // 0xb8
    float Overcast; // 0xbc
    float OutdoorsIndoors; // 0xc0
    float FilteredOutdoorsIndoors; // 0xc4
}; // Size: 0xc8
#pragma pack(pop)
