#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGlobalLightGroupsScheduleDebugMapEntry {
    FName Key; // 0x0
    TArray<FString> ScheduleEntries; // 0x8
}; // Size: 0x18
#pragma pack(pop)
