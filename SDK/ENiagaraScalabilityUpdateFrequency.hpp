#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraScalabilityUpdateFrequency : int32_t {
    SpawnOnly = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Continuous = 4,
    ENiagaraScalabilityUpdateFrequency_MAX = 5,
};
#pragma pack(pop)
