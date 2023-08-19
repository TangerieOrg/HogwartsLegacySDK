#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicsAssetSolverType : uint8_t {
    RBAN = 0,
    World = 1,
    EPhysicsAssetSolverType_MAX = 2,
};
#pragma pack(pop)
