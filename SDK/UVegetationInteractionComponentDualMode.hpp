#pragma once
#include <cstdint>
#include "FVegetationInteractionSettings.hpp"
#include "FVegetationInteractionSpringMassSettings.hpp"
#include "FVegetationInteractionSpringMassTracker.hpp"
#include "FVegetationInteractionVelocityTracker.hpp"
#include "UVegetationInteractionComponent.hpp"
#pragma pack(push, 1)
class UVegetationInteractionComponentDualMode : public UVegetationInteractionComponent {
public:
    float Priority; // 0xd0
    FVegetationInteractionSettings SettingsMode0; // 0xd4
    FVegetationInteractionSettings SettingsMode1; // 0xf8
    FVegetationInteractionSpringMassSettings SpringMassMode0; // 0x11c
    FVegetationInteractionSpringMassSettings SpringMassMode1; // 0x134
    float Mode; // 0x14c
    float ModeTarget; // 0x150
    float ModeRate; // 0x154
    FVegetationInteractionVelocityTracker VelocityTracker; // 0x158
    FVegetationInteractionSpringMassTracker SpringMassTracker; // 0x188
    static UVegetationInteractionComponentDualMode* StaticClass();
    void SetVegetationInteractionModeSmooth(float TargetZeroOrOne, float RatePerSecond);
    void SetVegetationInteractionModeImmediate(float TargetZeroOrOne);
}; // Size: 0x190
#pragma pack(pop)
