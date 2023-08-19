#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraCoordinateSpace {
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraCoordinateSpace_MAX = 3,
};
#pragma pack(pop)
