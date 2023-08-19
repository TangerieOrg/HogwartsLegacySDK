#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraMeshLockedAxisSpace : uint8_t {
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraMeshLockedAxisSpace_MAX = 3,
};
#pragma pack(pop)
