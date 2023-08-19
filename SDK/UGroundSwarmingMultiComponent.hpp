#pragma once
#include <cstdint>
#include "FGroundSwarmingDeathVolume.hpp"
#include "FGroundSwarmingExternalForce.hpp"
#include "FGroundSwarmingForceModifier.hpp"
#include "UGroundSwarmingControlComponent.hpp"
#pragma pack(push, 1)
class UGroundSwarmingMultiComponent : public UGroundSwarmingControlComponent {
public:
    FGroundSwarmingExternalForce ExternalForce; // 0x220
    FGroundSwarmingForceModifier ForceModifier; // 0x2f0
    FGroundSwarmingDeathVolume DeathVolume; // 0x3c0
    bool bUseExternalForce; // 0x4d0
    bool bUseForceModifier; // 0x4d1
    bool bUseDeathVolume; // 0x4d2
    char pad_4d3[0xd];
    static UGroundSwarmingMultiComponent* StaticClass();
}; // Size: 0x4e0
#pragma pack(pop)
