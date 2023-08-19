#pragma once
#include <cstdint>
#include "FRigUnit_DebugBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable {
    int32_t NumberOfMeasurements; // 0x68
    char pad_6c[0x4];
    FString Prefix; // 0x70
    float AccumulatedTime; // 0x80
    int32_t MeasurementsLeft; // 0x84
}; // Size: 0x88
#pragma pack(pop)
