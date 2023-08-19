#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t {
    Mesh = 0,
    Simulation = 1,
    World = 2,
    Local = 3,
    ENiagaraMeshPivotOffsetSpace_MAX = 4,
};
#pragma pack(pop)
