#pragma once
#include <cstdint>
#include "USynthComponent.hpp"
#pragma pack(push, 1)
class USynthComponentToneGenerator : public USynthComponent {
public:
    float Frequency; // 0x6e0
    float Volume; // 0x6e4
    char pad_6e8[0x18];
    static USynthComponentToneGenerator* StaticClass();
    void SetVolume(float InVolume);
    void SetFrequency(float InFrequency);
}; // Size: 0x700
#pragma pack(pop)
