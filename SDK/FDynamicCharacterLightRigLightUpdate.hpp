#pragma once
#include <cstdint>
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FDynamicCharacterLightRigLightUpdate {
    AActor* Owner; // 0x0
    float DayNightLerp; // 0x8
    float TemperatureMod; // 0xc
    float IntensityMod; // 0x10
    float Adaptation; // 0x14
    FVector OwnerPosition; // 0x18
    FVector OwnerDirection; // 0x24
    FVector CameraPosition; // 0x30
    FVector CameraDirection; // 0x3c
    FVector DirectionalLight; // 0x48
    float DirectionalLightIntensity; // 0x54
    float DirectionalLightAzimuthDegrees; // 0x58
    float DirectionalLightAltitudeDegrees; // 0x5c
    bool bDirectionalLight; // 0x60
    bool bEnabled; // 0x61
    char pad_62[0x6];
}; // Size: 0x68
#pragma pack(pop)
