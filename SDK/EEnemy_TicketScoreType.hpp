#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_TicketScoreType {
    Allowed = 0,
    HasTicket = 1,
    NotAllowed = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
