#pragma once
#include <cstdint>
#include "FRecordedFrame.hpp"
#pragma pack(push, 1)
struct FRecordedTransformTrack {
    TArray<FRecordedFrame> Records; // 0x0
}; // Size: 0x10
#pragma pack(pop)
