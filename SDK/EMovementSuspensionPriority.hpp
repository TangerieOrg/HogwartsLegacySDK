#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovementSuspensionPriority {
    Lowest = 0,
    SE_RenderShutdown = 1,
    NPC_Shutdown = 2,
    StationEnter = 3,
    BroomFlight = 4,
    PassiveCinematic = 5,
    ActiveCinematic = 6,
    Highest = 7,
    EMovementSuspensionPriority_MAX = 8,
};
#pragma pack(pop)
