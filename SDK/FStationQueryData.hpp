#pragma once
#include <cstdint>
#include "EStationInteraction.hpp"
#include "FStorySetupData.hpp"
#pragma pack(push, 1)
struct FStationQueryData : public FStorySetupData {
    char pad_10[0x8];
    int32_t ConnectionsBitmask; // 0x18
    bool StationValid; // 0x1c
    EStationInteraction StationInteractionStatus; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
