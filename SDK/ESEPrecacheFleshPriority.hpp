#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESEPrecacheFleshPriority : uint8_t {
    CachedPriority = 0,
    BluePrintPriority = 1,
    PerformTaskPriority = 2,
    CompanionPriority = 3,
    MissionPriority = 4,
    ConversationPriority = 5,
    CinematicPriority = 6,
    ESEPrecacheFleshPriority_MAX = 7,
};
#pragma pack(pop)
