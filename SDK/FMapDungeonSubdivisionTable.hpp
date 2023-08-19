#pragma once
#include <cstdint>
#include "FMissionName.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMapDungeonSubdivisionTable : public FTableRowBase {
    FString DungeonName; // 0x8
    FString OwnerName; // 0x18
    float PerceptionRadius; // 0x28
    float ZoomFactor; // 0x2c
    FMissionName MissionLock; // 0x30
    FString MissionStepLock; // 0x38
    bool OpenAfterMission; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
