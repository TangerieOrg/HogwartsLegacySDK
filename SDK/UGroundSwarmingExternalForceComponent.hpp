#pragma once
#include <cstdint>
#include "FGroundSwarmingExternalForce.hpp"
#include "UGroundSwarmingControlComponent.hpp"
#pragma pack(push, 1)
class UGroundSwarmingExternalForceComponent : public UGroundSwarmingControlComponent {
public:
    FGroundSwarmingExternalForce ExternalForce; // 0x220
    static UGroundSwarmingExternalForceComponent* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
