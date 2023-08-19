#pragma once
#include <cstdint>
#include "EWindGustCurveRemap.hpp"
#include "EWindGustSpeedOp.hpp"
#include "FVector2D.hpp"
#include "UWindGustControllerSimplexNoise.hpp"
#pragma pack(push, 1)
class UWindGustControllerSimplexNoiseSpeed : public UWindGustControllerSimplexNoise {
public:
    FVector2D NoiseRangeIn; // 0x50
    FVector2D GustRangeOut; // 0x58
    EWindGustCurveRemap Remap; // 0x60
    EWindGustSpeedOp SpeedOp; // 0x61
    char pad_62[0x6];
    static UWindGustControllerSimplexNoiseSpeed* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
