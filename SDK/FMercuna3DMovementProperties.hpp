#pragma once
#include <cstdint>
#include "FMercuna3DMovementAccelerations.hpp"
#include "FMercuna3DMovementWorldAccelerations.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMercuna3DMovementProperties {
    float MaxSpeed; // 0x0
    FVector MaxAccel; // 0x4
    FMercuna3DMovementAccelerations MaxAccelerations; // 0x10
    float MaxAngSpeed; // 0x1c
    float MaxPitchRate; // 0x20
    float MaxYawRate; // 0x24
    float MaxRollRate; // 0x28
    float MaxAngAccel; // 0x2c
    bool bEnableWorldAccelerationLimits; // 0x30
    char pad_31[0x3];
    FMercuna3DMovementWorldAccelerations WorldAccelerationLimits; // 0x34
}; // Size: 0x3c
#pragma pack(pop)
