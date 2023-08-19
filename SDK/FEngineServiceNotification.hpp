#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEngineServiceNotification {
    FString Text; // 0x0
    double TimeSeconds; // 0x10
}; // Size: 0x18
#pragma pack(pop)
