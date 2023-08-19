#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosSolverTickMode : uint8_t {
    Fixed = 0,
    Variable = 1,
    VariableCapped = 2,
    VariableCappedWithTarget = 3,
    EChaosSolverTickMode_MAX = 4,
};
#pragma pack(pop)
