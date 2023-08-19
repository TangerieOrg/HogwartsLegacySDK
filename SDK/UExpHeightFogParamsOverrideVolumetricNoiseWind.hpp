#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideVolumetricNoiseWind : public UExpHeightFogParams {
public:
    FVector AddWindVelocity; // 0x30
    char pad_3c[0x4];
    static UExpHeightFogParamsOverrideVolumetricNoiseWind* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
