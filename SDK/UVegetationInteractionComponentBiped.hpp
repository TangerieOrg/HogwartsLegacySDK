#pragma once
#include <cstdint>
#include "FVegetationInteractionVelocityTracker.hpp"
#include "UVegetationInteractionComponent.hpp"
#pragma pack(push, 1)
class UVegetationInteractionComponentBiped : public UVegetationInteractionComponent {
public:
    float Priority; // 0xd0
    float InnerRadiusFactor; // 0xd4
    float OuterRadiusFactor; // 0xd8
    float ForceScalingMultiplierMin; // 0xdc
    float ForceScalingMultiplierMax; // 0xe0
    float MaxAngleMultiplierMin; // 0xe4
    float MaxAngleMultiplierMax; // 0xe8
    float MaxVelocityMS; // 0xec
    float RotationalVelocityDegreesSec; // 0xf0
    float FirstOrderDamping; // 0xf4
    float SecondOrderDamping; // 0xf8
    float SecondOrderNaturalFrequency; // 0xfc
    bool bSecondOrder; // 0x100
    char pad_101[0x3];
    FVegetationInteractionVelocityTracker VelocityTracker; // 0x104
    float SpringMass; // 0x134
    float SpringMassVelocity; // 0x138
    char pad_13c[0x4];
    static UVegetationInteractionComponentBiped* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
