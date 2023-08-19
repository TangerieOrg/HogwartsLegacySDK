#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UFloatingPawnMovement.hpp"
#pragma pack(push, 1)
class UPhoenixHoverDroneMovementComponent : public UFloatingPawnMovement {
public:
    char pad_168[0x48];
    float RotAcceleration; // 0x1b0
    float RotDeceleration; // 0x1b4
    float MaxPitchRotSpeed; // 0x1b8
    float MaxYawRotSpeed; // 0x1bc
    float TurboRotAcceleration; // 0x1c0
    float TurboRotDeceleration; // 0x1c4
    float TurboMaxPitchRotSpeed; // 0x1c8
    float TurboMaxYawRotSpeed; // 0x1cc
    FVector2D TurboAccelerationRange; // 0x1d0
    FVector2D TurboAccelerationAltitudeRange; // 0x1d8
    float TurboDeceleration; // 0x1e0
    char pad_1e4[0x1d4];
    static UPhoenixHoverDroneMovementComponent* StaticClass();
}; // Size: 0x3b8
#pragma pack(pop)
