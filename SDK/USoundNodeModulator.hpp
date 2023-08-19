#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeModulator : public USoundNode {
public:
    float PitchMin; // 0x48
    float PitchMax; // 0x4c
    float VolumeMin; // 0x50
    float VolumeMax; // 0x54
    static USoundNodeModulator* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
