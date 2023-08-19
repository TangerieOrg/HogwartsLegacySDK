#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCustomBlendableVDHW {
    uint8_t bOverride_bMovingCameraSupport : 1; // 0x0
    uint8_t bOverride_MovingCameraStartSpeed : 1; // 0x0
    uint8_t bOverride_MovingCameraEndSpeed : 1; // 0x0
    uint8_t bOverride_MovingCameraStartRotation : 1; // 0x0
    uint8_t bOverride_MovingCameraEndRotation : 1; // 0x0
    uint8_t bOverride_bExposureShiftSupport : 1; // 0x0
    uint8_t bOverride_ExposureShiftStart : 1; // 0x0
    uint8_t bOverride_ExposureShiftEnd : 1; // 0x0
    bool bMovingCameraSupport; // 0x1
    char pad_2[0x2];
    float MovingCameraStartSpeed; // 0x4
    float MovingCameraEndSpeed; // 0x8
    float MovingCameraStartRotation; // 0xc
    float MovingCameraEndRotation; // 0x10
    bool bExposureShiftSupport; // 0x14
    char pad_15[0x3];
    float ExposureShiftStart; // 0x18
    float ExposureShiftEnd; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
