#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomNiagaraSolvers : uint8_t {
    None = 0,
    CosseratRods = 2,
    AngularSprings = 4,
    CustomSolver = 8,
    EGroomNiagaraSolvers_MAX = 9,
};
#pragma pack(pop)
