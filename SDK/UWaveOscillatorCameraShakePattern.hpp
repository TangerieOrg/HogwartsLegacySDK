#pragma once
#include <cstdint>
#include "FWaveOscillator.hpp"
#include "USimpleCameraShakePattern.hpp"
#pragma pack(push, 1)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern {
public:
    float LocationAmplitudeMultiplier; // 0x38
    float LocationFrequencyMultiplier; // 0x3c
    FWaveOscillator X; // 0x40
    FWaveOscillator Y; // 0x4c
    FWaveOscillator Z; // 0x58
    float RotationAmplitudeMultiplier; // 0x64
    float RotationFrequencyMultiplier; // 0x68
    FWaveOscillator Pitch; // 0x6c
    FWaveOscillator Yaw; // 0x78
    FWaveOscillator Roll; // 0x84
    FWaveOscillator FOV; // 0x90
    char pad_9c[0x3c];
    static UWaveOscillatorCameraShakePattern* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
