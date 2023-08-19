#pragma once
#include <cstdint>
#include "EGlobalLightGroupsImportScheduleType.hpp"
#include "FGlobalLightGroupsImportScheduleOptionsAdvanced.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsImportScheduleOptions {
    EGlobalLightGroupsImportScheduleType Type; // 0x0
    char pad_1[0x3];
    FGlobalLightGroupsImportScheduleOptionsAdvanced Advanced; // 0x4
}; // Size: 0x14
#pragma pack(pop)
