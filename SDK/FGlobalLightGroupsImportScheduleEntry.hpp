#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsImportScheduleEntry : public FTableRowBase {
    FName GroupName; // 0x8
    int32_t OnHour; // 0x10
    int32_t OnMinute; // 0x14
    float OnRandMinutesMin; // 0x18
    float OnRandMinutesMax; // 0x1c
    int32_t OffHour; // 0x20
    int32_t OffMinute; // 0x24
    float OffRandMinutesMin; // 0x28
    float OffRandMinutesMax; // 0x2c
    bool bNormalizeForSeasons; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
