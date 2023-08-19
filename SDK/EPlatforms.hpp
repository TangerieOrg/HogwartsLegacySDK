#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlatforms {
    Platform_Switch = 1,
    Platform_LastGen = 2,
    Platform_NextGen = 4,
    Platform_PC = 8,
    Platform_MAX = 9,
};
#pragma pack(pop)
