#pragma once
#include <cstdint>
class APhoenixMapRegion;
#pragma pack(push, 1)
struct FMapWithinRegion {
    APhoenixMapRegion* Region; // 0x0
    APhoenixMapRegion* SubRegion; // 0x8
    APhoenixMapRegion* LevelRegion; // 0x10
    APhoenixMapRegion* InnerLevelRegion; // 0x18
    FString RegionName; // 0x20
}; // Size: 0x30
#pragma pack(pop)
