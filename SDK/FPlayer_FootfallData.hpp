#pragma once
#include <cstdint>
#include "EGameEvent_Intensity.hpp"
#pragma pack(push, 1)
struct FPlayer_FootfallData {
    char pad_0[0x14];
    float PingDistance; // 0x14
    float MinSpeed; // 0x18
    float MaxSpeed; // 0x1c
    float MinRange; // 0x20
    float MaxRange; // 0x24
    EGameEvent_Intensity Intensity; // 0x28
    char pad_29[0x3];
    float MinDisillusionmentRange; // 0x2c
    float MaxDisillusionmentRange; // 0x30
    EGameEvent_Intensity DisillusionmentIntensity; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
