#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractSensePriority {
    Lowest = 0,
    NPC = 1,
    Conversation = 2,
    ActiveCinematic = 3,
    PerformTask = 4,
    HideTrigger = 5,
    ScheduleTimeWindow = 6,
    Highest = 7,
    EInteractSensePriority_MAX = 8,
};
#pragma pack(pop)
