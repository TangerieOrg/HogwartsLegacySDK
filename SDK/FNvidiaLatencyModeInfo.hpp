#pragma once
#include <cstdint>
#include "ENvidiaLatencyMode.hpp"
#pragma pack(push, 1)
struct FNvidiaLatencyModeInfo {
    ENvidiaLatencyMode Mode; // 0x0
    char pad_1[0x7];
    FString LocStr; // 0x8
}; // Size: 0x18
#pragma pack(pop)
