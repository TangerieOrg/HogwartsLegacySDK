#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class GazeStatesEnum : uint8_t {
    RANDOM_BY_WEIGHT = 0,
    CENTRAL_FOCUS = 1,
    INTERNAL_MEMORY_NW = 2,
    AUDITORY_MEMORY_W = 3,
    EMOTIONAL_MEMORY_SW = 4,
    VISUAL_CONSTRUCTION_NE = 5,
    AUDITORY_CONSTRUCTION_E = 6,
    BODY_SENSATION_RECALL_SE = 7,
    SMELL_N = 8,
    TASTE_S = 9,
    GazeStatesEnum_MAX = 10,
};
#pragma pack(pop)
