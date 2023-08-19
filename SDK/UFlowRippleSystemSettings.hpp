#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFlowRippleSystemSettings : public UDataAsset {
public:
    float WaveSpeed; // 0x30
    float Damping; // 0x34
    FRuntimeFloatCurve VelocityToIntensity; // 0x38
    static UFlowRippleSystemSettings* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
