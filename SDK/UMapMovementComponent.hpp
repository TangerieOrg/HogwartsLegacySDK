#pragma once
#include <cstdint>
#include "UFloatingPawnMovement.hpp"
class UMapCameraParameters;
#pragma pack(push, 1)
class UMapMovementComponent : public UFloatingPawnMovement {
public:
    float MaxPitchRotSpeed; // 0x168
    float MaxYawRotSpeed; // 0x16c
    float MaxZoomSpeed; // 0x170
    float MinCameraRadius; // 0x174
    float MaxCameraRadius; // 0x178
    float MinCameraPitch; // 0x17c
    float MaxCameraPitch; // 0x180
    char pad_184[0x4];
    UMapCameraParameters* CurrentCameraParameters; // 0x188
    char pad_190[0x4];
    float CameraPitch; // 0x194
    float CurrentCameraYaw; // 0x198
    float TargetCameraYaw; // 0x19c
    char pad_1a0[0x70];
    static UMapMovementComponent* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
