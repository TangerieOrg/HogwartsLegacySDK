#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAITaskPriority {
    Lowest = 0,
    Low = 64,
    AutonomousAI = 127,
    High = 192,
    Ultimate = 254,
    EAITaskPriority_MAX = 255,
};
#pragma pack(pop)
