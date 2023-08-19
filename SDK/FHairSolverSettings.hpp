#pragma once
#include <cstdint>
#include "EGroomNiagaraSolvers.hpp"
#pragma pack(push, 1)
struct FHairSolverSettings {
    bool EnableSimulation; // 0x0
    EGroomNiagaraSolvers NiagaraSolver; // 0x1
    char pad_2[0x2e];
    int32_t SubSteps; // 0x30
    int32_t IterationCount; // 0x34
}; // Size: 0x38
#pragma pack(pop)
