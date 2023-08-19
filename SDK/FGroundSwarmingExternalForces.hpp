#pragma once
#include <cstdint>
#include "FGroundSwarmingExternalForce.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingExternalForces {
    TArray<FGroundSwarmingExternalForce> ExternalForces; // 0x0
}; // Size: 0x10
#pragma pack(pop)
