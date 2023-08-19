#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESchedulingPriority : uint8_t {
    ScheduledEntityPriority = 0,
    BluePrintPriority = 1,
    CompanionPriority = 2,
    NonCombatPriority = 3,
    NPCPriority = 4,
    EnemyPriority = 5,
    CinematicPriority = 6,
    SystemPriority = 7,
    TransientAction = 8,
    ShutdownPriority = 9,
    ForcedShutdownPriority = 10,
    ESchedulingPriority_MAX = 11,
};
#pragma pack(pop)
