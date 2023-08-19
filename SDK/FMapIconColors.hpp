#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMapIconColors : public FTableRowBase {
    FDataTableRowHandle UndiscoveredIconColor; // 0x8
    FDataTableRowHandle DiscoveredIconColor; // 0x18
    FDataTableRowHandle DiscoveredIncompleteIconColor; // 0x28
    FDataTableRowHandle CompletedIconColor; // 0x38
    FDataTableRowHandle LockedIconColor; // 0x48
    FDataTableRowHandle UnlockedIconColor; // 0x58
    FDataTableRowHandle TrackedIconColor; // 0x68
    FDataTableRowHandle TrackedWaypointIconColor; // 0x78
    FDataTableRowHandle MainLineMissionIconColor; // 0x88
    FDataTableRowHandle ClosestFastTravelIconColor; // 0x98
    FDataTableRowHandle MissionLevelNotHighEnough; // 0xa8
    FDataTableRowHandle AuthorityFigureColor; // 0xb8
    FDataTableRowHandle EnemyColor; // 0xc8
    FDataTableRowHandle HiddenByFogOfWar; // 0xd8
    FDataTableRowHandle FastTravelLocked; // 0xe8
    FDataTableRowHandle FastTravelUnlocked; // 0xf8
}; // Size: 0x108
#pragma pack(pop)
