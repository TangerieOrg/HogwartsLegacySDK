#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UReverbEffect : public UObject {
public:
    bool bBypassEarlyReflections; // 0x28
    char pad_29[0x3];
    float ReflectionsDelay; // 0x2c
    float GainHF; // 0x30
    float ReflectionsGain; // 0x34
    bool bBypassLateReflections; // 0x38
    char pad_39[0x3];
    float LateDelay; // 0x3c
    float DecayTime; // 0x40
    float Density; // 0x44
    float Diffusion; // 0x48
    float AirAbsorptionGainHF; // 0x4c
    float DecayHFRatio; // 0x50
    float LateGain; // 0x54
    float Gain; // 0x58
    float RoomRolloffFactor; // 0x5c
    static UReverbEffect* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
