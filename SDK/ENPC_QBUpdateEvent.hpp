#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_QBUpdateEvent {
    Ticket = 0,
    MoveChance = 1,
    MoveStop = 2,
    MoveStart = 3,
    Attacked = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
