#pragma once
#include <cstdint>
#include "FPartyBeaconCrossplayPlatformMapping.hpp"
#include "FPartyReservation.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPartyBeaconState : public UObject {
public:
    FName SessionName; // 0x28
    int32_t NumConsumedReservations; // 0x30
    int32_t MaxReservations; // 0x34
    int32_t NumTeams; // 0x38
    int32_t NumPlayersPerTeam; // 0x3c
    FName TeamAssignmentMethod; // 0x40
    int32_t ReservedHostTeamNum; // 0x48
    int32_t ForceTeamNum; // 0x4c
    bool bRestrictCrossConsole; // 0x50
    char pad_51[0x7];
    TArray<FString> PlatformCrossplayRestrictions; // 0x58
    TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x68
    bool bEnableRemovalRequests; // 0x78
    char pad_79[0x7];
    TArray<FPartyReservation> Reservations; // 0x80
    char pad_90[0x10];
    static UPartyBeaconState* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
