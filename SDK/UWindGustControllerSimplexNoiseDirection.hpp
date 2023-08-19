#pragma once
#include <cstdint>
#include "EWindGustCurveRemap.hpp"
#include "FVector2D.hpp"
#include "UWindGustControllerSimplexNoise.hpp"
#pragma pack(push, 1)
class UWindGustControllerSimplexNoiseDirection : public UWindGustControllerSimplexNoise {
public:
    FVector2D NoiseRangeIn; // 0x50
    FVector2D GustRangeOut; // 0x58
    EWindGustCurveRemap Remap; // 0x60
    char pad_61[0x7];
    static UWindGustControllerSimplexNoiseDirection* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
