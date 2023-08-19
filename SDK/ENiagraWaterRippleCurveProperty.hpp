#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagraWaterRippleCurveProperty : uint8_t {
    TargetMass = 0,
    TargetVelocity = 1,
    TargetVelocityZ = 2,
    InstigatorMass = 3,
    InstigatorVelocity = 4,
    InstigatorVelocityZ = 5,
    ImpactMass = 6,
    ImpactVelocity = 7,
    ImpactMomentum = 8,
    ENiagraWaterRippleCurveProperty_MAX = 9,
};
#pragma pack(pop)
