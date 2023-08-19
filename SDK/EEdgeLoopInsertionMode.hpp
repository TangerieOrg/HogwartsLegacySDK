#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEdgeLoopInsertionMode : int32_t {
    Retriangulate = 0,
    PlaneCut = 1,
    EEdgeLoopInsertionMode_MAX = 2,
};
#pragma pack(pop)
