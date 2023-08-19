#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeLooping : public USoundNode {
public:
    int32_t LoopCount; // 0x48
    uint8_t bLoopIndefinitely : 1; // 0x4c
    uint8_t pad_bitfield_4c_1 : 7;
    char pad_4d[0x3];
    static USoundNodeLooping* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
