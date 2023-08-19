#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FActivityStruct {
    float StartTime; // 0x0
    float EndTime; // 0x4
    FString ActivityID; // 0x8
    FString ActivityTypeID; // 0x18
}; // Size: 0x28
#pragma pack(pop)
