#pragma once
#include <cstdint>
#include "FPlayerReservation.hpp"
#include "FUniqueNetIdRepl.hpp"
#pragma pack(push, 1)
struct FSpectatorReservation {
    FUniqueNetIdRepl SpectatorId; // 0x0
    FPlayerReservation Spectator; // 0x28
}; // Size: 0x78
#pragma pack(pop)
