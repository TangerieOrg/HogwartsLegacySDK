#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMoonDiskParameters {
    float DayEmissiveTarget; // 0x0
    float DayEmissiveMax; // 0x4
    float NightEmissiveTarget; // 0x8
    float NightEmissiveMax; // 0xc
    float Earthshine; // 0x10
    float EarthShineMax; // 0x14
    float EarthShineWinterFactor; // 0x18
    float SunMoonFullWashoutAngle; // 0x1c
    float SunMoonNoWashoutAngle; // 0x20
    float AlbedoFloor; // 0x24
    float DetailScale; // 0x28
    float SpaceLightingPower; // 0x2c
    float Size; // 0x30
    float Distance; // 0x34
}; // Size: 0x38
#pragma pack(pop)
