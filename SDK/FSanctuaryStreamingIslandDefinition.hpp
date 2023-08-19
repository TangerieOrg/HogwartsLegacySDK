#pragma once
#include <cstdint>
#include "FSanctuaryStreamingZoneDefinition.hpp"
#pragma pack(push, 1)
struct FSanctuaryStreamingIslandDefinition {
    FName IslandName; // 0x0
    TArray<FSanctuaryStreamingZoneDefinition> Zones; // 0x8
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
