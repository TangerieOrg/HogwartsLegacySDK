#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FNavigationSystemRunMode : uint8_t {
    InvalidMode = 0,
    GameMode = 1,
    EditorMode = 2,
    SimulationMode = 3,
    PIEMode = 4,
    InferFromWorldMode = 5,
    FNavigationSystemRunMode_MAX = 6,
};
#pragma pack(pop)
