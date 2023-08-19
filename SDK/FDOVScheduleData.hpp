#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDOVScheduleData {
    FString ScheduleActivity; // 0x0
    FString ScheduleLocation; // 0x10
    FString StartTime; // 0x20
    FString EndTime; // 0x30
}; // Size: 0x40
#pragma pack(pop)
