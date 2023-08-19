#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraNumericOutputTypeSelectionMode {
    None = 0,
    Largest = 1,
    Smallest = 2,
    Scalar = 3,
    ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};
#pragma pack(pop)
