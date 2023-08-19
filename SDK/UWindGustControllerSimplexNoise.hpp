#pragma once
#include <cstdint>
#include "EWindGustSimplexNoiseMode.hpp"
#include "FVector.hpp"
#include "UWindGustController.hpp"
#pragma pack(push, 1)
class UWindGustControllerSimplexNoise : public UWindGustController {
public:
    float TimeScale; // 0x28
    FVector PositionScale; // 0x2c
    EWindGustSimplexNoiseMode Mode; // 0x38
    char pad_39[0x3];
    float Seed; // 0x3c
    FVector InvPositionScale; // 0x40
    char pad_4c[0x4];
    static UWindGustControllerSimplexNoise* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
