#pragma once
#include <cstdint>
#include "FGroundSwarmingForceModifier.hpp"
#include "UGroundSwarmingControlComponent.hpp"
#pragma pack(push, 1)
class UGroundSwarmingExternalForceModifierComponent : public UGroundSwarmingControlComponent {
public:
    FGroundSwarmingForceModifier ForceModifier; // 0x220
    static UGroundSwarmingExternalForceModifierComponent* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
