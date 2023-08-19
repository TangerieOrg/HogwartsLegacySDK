#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStatsComponentReportSettings {
    TArray<FString> Args; // 0x0
    uint32_t TotalReports; // 0x10
    uint32_t FrameDelay; // 0x14
}; // Size: 0x18
#pragma pack(pop)
