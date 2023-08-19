#pragma once
#include <cstdint>
#include "USchedulerTimeProvider.hpp"
#pragma pack(push, 1)
class USchedulerTime_Direct : public USchedulerTimeProvider {
public:
    int32_t Hours; // 0x28
    int32_t Minutes; // 0x2c
    int32_t Seconds; // 0x30
    char pad_34[0x4];
    static USchedulerTime_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
