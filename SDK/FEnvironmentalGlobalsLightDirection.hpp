#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsLightDirection {
    FVector Direction; // 0x0
    FRotator Rotator; // 0xc
    float AzimuthDegrees; // 0x18
    float AltitudeDegrees; // 0x1c
    float UnitIntensity; // 0x20
    float Intensity; // 0x24
    float AtmosphericIntensity; // 0x28
    FLinearColor Color; // 0x2c
    FLinearColor AtmosphericColor; // 0x3c
    bool bInferredFromWorld; // 0x4c
    char pad_4d[0x3];
}; // Size: 0x50
#pragma pack(pop)
