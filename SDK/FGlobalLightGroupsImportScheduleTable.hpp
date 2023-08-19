#pragma once
#include <cstdint>
#include "FGlobalLightGroupsImportScheduleOptions.hpp"
class UDataTable;
#pragma pack(push, 1)
struct FGlobalLightGroupsImportScheduleTable {
    UDataTable* ScheduleTable; // 0x0
    FGlobalLightGroupsImportScheduleOptions ImportOptions; // 0x8
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
