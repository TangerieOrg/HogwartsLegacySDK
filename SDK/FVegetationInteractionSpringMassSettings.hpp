#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVegetationInteractionSpringMassSettings {
    float MaxVelocityMS; // 0x0
    float RotationalVelocityDegreesSec; // 0x4
    float FirstOrderDamping; // 0x8
    float SecondOrderDamping; // 0xc
    float SecondOrderNaturalFrequency; // 0x10
    float SecondOrderStrength; // 0x14
}; // Size: 0x18
#pragma pack(pop)
