#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSimpleMonitorInformation {
    FString MonitorName; // 0x0
    int32_t MonitorIndex; // 0x10
    bool bIsPrimary; // 0x14
    char pad_15[0x3];
    int32_t NativeWidth; // 0x18
    int32_t NativeHeight; // 0x1c
    FVector2D VirtualPosition; // 0x20
}; // Size: 0x28
#pragma pack(pop)
