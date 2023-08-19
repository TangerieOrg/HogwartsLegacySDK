#pragma once
#include <cstdint>
#include "EMissionTabType.hpp"
#include "FMissionLogData.hpp"
#pragma pack(push, 1)
struct FMissionTabData {
    EMissionTabType MissionType; // 0x0
    char pad_1[0x7];
    TArray<FMissionLogData> MissionData; // 0x8
    FString TitleText; // 0x18
    FString NoMissionText; // 0x28
    bool ShowTotals; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
