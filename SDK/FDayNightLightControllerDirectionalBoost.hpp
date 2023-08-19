#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDayNightLightControllerDirectionalBoost {
    float LightHalfAngleMin; // 0x0
    float LightHalfAngleMax; // 0x4
    float BoostPercentage; // 0x8
}; // Size: 0xc
#pragma pack(pop)
