#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkinFXStandardParamsBounds {
    FName Sphere; // 0x0
    FName BoxMin; // 0x8
    FName BoxMax; // 0x10
    FName BoxCenter; // 0x18
    FName BoxExtent; // 0x20
    FName ScreenSpaceBoxMinMax; // 0x28
    FName ScreenSpaceBoxCenterExtent; // 0x30
    FName ScreenSpaceBoundingCircle; // 0x38
    uint8_t bSphere : 1; // 0x40
    uint8_t bBoxMin : 1; // 0x40
    uint8_t bBoxMax : 1; // 0x40
    uint8_t bBoxCenter : 1; // 0x40
    uint8_t bBoxExtent : 1; // 0x40
    uint8_t bScreenSpaceBoxMinMax : 1; // 0x40
    uint8_t bScreenSpaceBoxCenterExtent : 1; // 0x40
    uint8_t bScreenSpaceBoundingCircle : 1; // 0x40
    char pad_41[0x3];
}; // Size: 0x44
#pragma pack(pop)
