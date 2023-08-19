#pragma once
#include <cstdint>
#include "FPlayerReservation.hpp"
#include "FUniqueNetIdRepl.hpp"
#pragma pack(push, 1)
struct FPartyReservation {
    int32_t TeamNum; // 0x0
    char pad_4[0x4];
    FUniqueNetIdRepl PartyLeader; // 0x8
    TArray<FPlayerReservation> PartyMembers; // 0x30
    TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
}; // Size: 0x50
#pragma pack(pop)
