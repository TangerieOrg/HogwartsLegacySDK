#pragma once
#include <cstdint>
#include "ERingModulatorTypeSourceEffect.hpp"
class UAudioBus;
#pragma pack(push, 1)
struct FSourceEffectRingModulationSettings {
    ERingModulatorTypeSourceEffect ModulatorType; // 0x0
    char pad_1[0x3];
    float Frequency; // 0x4
    float Depth; // 0x8
    float DryLevel; // 0xc
    float WetLevel; // 0x10
    char pad_14[0x4];
    UAudioBus* AudioBusModulator; // 0x18
}; // Size: 0x20
#pragma pack(pop)
