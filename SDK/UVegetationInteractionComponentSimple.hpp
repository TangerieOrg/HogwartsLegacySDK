#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UVegetationInteractionComponent.hpp"
#pragma pack(push, 1)
class UVegetationInteractionComponentSimple : public UVegetationInteractionComponent {
public:
    float Priority; // 0xd0
    FVector Offset; // 0xd4
    float InnerRadius; // 0xe0
    float OuterRadius; // 0xe4
    float ForceScalingMultiplier; // 0xe8
    float MaxAngleMultiplier; // 0xec
    static UVegetationInteractionComponentSimple* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
