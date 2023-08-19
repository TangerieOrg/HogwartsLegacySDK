#pragma once
#include <cstdint>
#include "EMapToolTipTypes.hpp"
#include "EMapZoomTypes\Type.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMissionLogData.hpp"
#include "FMissionRewardData.hpp"
#include "FRegionPopuplData.hpp"
#include "FVector.hpp"
class UBeaconInfo;
class AMapCursor;
#pragma pack(push, 1)
struct FMapToolTipData {
    FVector InitialIconPosition; // 0x0
    char pad_c[0x4];
    UBeaconInfo* BeaconInfo; // 0x10
    AMapCursor* CursorWidget; // 0x18
    FString Title; // 0x20
    FString Region; // 0x30
    FString Description; // 0x40
    char pad_50[0x18];
    FMissionLogData MissionData; // 0x68
    int32_t LevelRequirement; // 0x110
    char pad_114[0x4];
    TArray<FMissionRewardData> MissionRewards; // 0x118
    EMapToolTipTypes Type; // 0x128
    char pad_129[0x3];
    int32_t Distance; // 0x12c
    bool ShouldShowDistance; // 0x130
    EMapZoomTypes::Type ZoomType; // 0x131
    char pad_132[0x6];
    FString AvailableMissionsTitle; // 0x138
    bool ShouldShowAvailableMissions; // 0x148
    char pad_149[0x7];
    TArray<FString> AvailableMissionNames; // 0x150
    TArray<FString> AvailableMissionIcons; // 0x160
    TArray<FLinearColor> AvailableMissionColors; // 0x170
    TArray<FRegionPopuplData> CollectionStats; // 0x180
    FString EnemyLevelString; // 0x190
    int32_t EnemyLevelMin; // 0x1a0
    int32_t EnemyLevelMax; // 0x1a4
    TArray<FLegendItemData> ButtonLegends; // 0x1a8
}; // Size: 0x1b8
#pragma pack(pop)
