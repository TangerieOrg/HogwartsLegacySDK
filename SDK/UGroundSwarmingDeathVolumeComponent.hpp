#pragma once
#include <cstdint>
#include "FGroundSwarmingDeathVolume.hpp"
#include "UGroundSwarmingControlComponent.hpp"
#pragma pack(push, 1)
class UGroundSwarmingDeathVolumeComponent : public UGroundSwarmingControlComponent {
public:
    FGroundSwarmingDeathVolume DeathVolume; // 0x220
    static UGroundSwarmingDeathVolumeComponent* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
