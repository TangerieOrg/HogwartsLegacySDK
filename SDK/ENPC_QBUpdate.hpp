#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_QBUpdate : uint8_t {
    PieCut = 0,
    Direct = 1,
    Close = 2,
    Evade = 3,
    Follow = 4,
    InOut = 5,
    SeekWeapon = 6,
    Cover = 7,
    Ticket = 8,
    Reposition = 9,
    Sidekick = 10,
    TombProtector = 11,
    Around = 12,
    SeekTarget = 13,
    BackOnNav = 14,
    LeadPlayer = 15,
    TooClose = 16,
    SwimToShore = 17,
    Standby = 18,
    Duel = 19,
    Alert = 20,
    Companion = 21,
    Combat = 22,
    RecoverWeapon = 23,
    POI = 24,
    ENPC_MAX = 25,
};
#pragma pack(pop)
