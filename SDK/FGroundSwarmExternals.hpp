#pragma once
#include <cstdint>
#include "FGroundSwarmSimulationFollowInfo.hpp"
#include "FGroundSwarmingDeathVolumes.hpp"
#include "FGroundSwarmingExternalForces.hpp"
#include "FGroundSwarmingFocus.hpp"
#include "FGroundSwarmingForceModifiers.hpp"
#pragma pack(push, 1)
struct FGroundSwarmExternals {
    FGroundSwarmingFocus Follow; // 0x0
    FGroundSwarmingExternalForces ExternalForces; // 0xa0
    FGroundSwarmingForceModifiers ForceModifiers; // 0xb0
    FGroundSwarmingDeathVolumes DeathVolumes; // 0xc0
    FGroundSwarmSimulationFollowInfo FollowInfo; // 0xd0
    char pad_ec[0x4];
}; // Size: 0xf0
#pragma pack(pop)
