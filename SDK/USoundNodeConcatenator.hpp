#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeConcatenator : public USoundNode {
public:
    TArray<float> InputVolume; // 0x48
    static USoundNodeConcatenator* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
