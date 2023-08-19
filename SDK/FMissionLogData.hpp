#pragma once
#include <cstdint>
#include "EMissionLine.hpp"
#include "FMissionRewardData.hpp"
#include "FProgressLockRewardEntry.hpp"
#include "FTaskData.hpp"
#pragma pack(push, 1)
struct FMissionLogData {
    FName MissionID; // 0x0
    int32_t MissionLevel; // 0x8
    int32_t SuggestedMissionLevel; // 0xc
    FString PrereqLockID1; // 0x10
    FString PrereqLockID2; // 0x20
    FString MissionTitle; // 0x30
    FString QuestJournal; // 0x40
    FString StepJournal; // 0x50
    TArray<FTaskData> TaskStates; // 0x60
    TArray<FString> RewardIDs; // 0x70
    TArray<FMissionRewardData> RewardData; // 0x80
    EMissionLine MissionLine; // 0x90
    bool IsSpine; // 0x91
    bool IsHomework; // 0x92
    bool IsRelationship; // 0x93
    bool IsExclusive; // 0x94
    bool IsTrackable; // 0x95
    bool IsComplete; // 0x96
    char pad_97[0x1];
    TArray<FProgressLockRewardEntry> ProgressLockRewards; // 0x98
}; // Size: 0xa8
#pragma pack(pop)
