#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FGeocentricOrbitCreateBaseParams.hpp"
#include "FTopographicObserver.hpp"
#pragma pack(push, 1)
struct FGeocentricOrbitCreateParams : public FGeocentricOrbitCreateBaseParams {
    FTopographicObserver TopographicPosition; // 0x1c
    FDateTime StartDateTime; // 0x30
    int32_t Samples; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
