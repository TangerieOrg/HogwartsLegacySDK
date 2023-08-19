#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFSolverType : uint8_t {
    Additive = 0,
    Interpolative = 1,
    ERBFSolverType_MAX = 2,
};
#pragma pack(pop)
