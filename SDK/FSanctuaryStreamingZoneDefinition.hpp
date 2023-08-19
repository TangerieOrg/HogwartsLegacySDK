#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
struct FSanctuaryStreamingZoneDefinition {
    FName ZoneName; // 0x0
    TArray<void*> MinimumLoad; // 0x8
    TArray<void*> ParallelLoad; // 0x18
    bool bStayVisibleWhenIslandIsHidden; // 0x28
    char pad_29[0x7];
    FDbSingleColumnInfo Lock; // 0x30
    TArray<FDbSingleColumnInfo> Locks; // 0xb8
    bool bMustBeLockedToLoadZone; // 0xc8
    char pad_c9[0x7];
    TArray<FName> ChildZones; // 0xd0
}; // Size: 0xe0
#pragma pack(pop)
