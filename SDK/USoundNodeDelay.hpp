#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeDelay : public USoundNode {
public:
    float DelayMin; // 0x48
    float DelayMax; // 0x4c
    static USoundNodeDelay* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
