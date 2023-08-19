#pragma once
#include <cstdint>
class UBeaconInfo;
#pragma pack(push, 1)
struct FHogwartsRegion {
    UBeaconInfo* Region; // 0x0
    TArray<UBeaconInfo*> RegionsIcons; // 0x8
    FName RequiredLock1; // 0x18
    UBeaconInfo* AlertBeacon; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
