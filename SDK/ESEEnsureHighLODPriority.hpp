#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESEEnsureHighLODPriority {
    Companion = 0,
    PassiveCinematic = 1,
    ActiveCinematic = 2,
    PerformTask = 3,
    Creature = 4,
    AuthorityFigure = 5,
    SeatFiller = 6,
    BroomFlight = 7,
    Apparate = 8,
    ESEEnsureHighLODPriority_MAX = 9,
};
#pragma pack(pop)
