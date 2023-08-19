#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeMixer : public USoundNode {
public:
    TArray<float> InputVolume; // 0x48
    static USoundNodeMixer* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
