#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroupEdgeInsertionMode : int32_t {
    Retriangulate = 0,
    PlaneCut = 1,
    EGroupEdgeInsertionMode_MAX = 2,
};
#pragma pack(pop)
