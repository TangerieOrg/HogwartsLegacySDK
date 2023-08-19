#pragma once
#include <cstdint>
#include "FLastRenderedExposure.hpp"
#include "FLastRenderedExposureRunningAverage.hpp"
#pragma pack(push, 1)
struct FLastRenderedExposurePair {
    FLastRenderedExposure Current; // 0x0
    FLastRenderedExposure Filtered; // 0x20
    FLastRenderedExposureRunningAverage History; // 0x40
}; // Size: 0x68
#pragma pack(pop)
