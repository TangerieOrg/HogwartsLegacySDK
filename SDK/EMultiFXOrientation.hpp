#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXOrientation : uint8_t {
    AnchorOrient = 0,
    ZeroOrient = 1,
    WandtipOrient = 2,
    GroundOrient = 3,
    InvertOrient = 4,
    InstigatorOrient = 5,
    ImpactPointOrient = 6,
    TargetPointOrient = 7,
    TowardInstigator = 8,
    InstigatorToTarget = 9,
    ZeroPitch = 10,
    ZeroRoll = 11,
    ZeroYaw = 12,
    VelocityOrient = 13,
    WeaponOrient = 14,
    EMultiFXOrientation_MAX = 15,
};
#pragma pack(pop)
