#pragma once
#include <cstdint>
#include "FDialogueWaveParameter.hpp"
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeDialoguePlayer : public USoundNode {
public:
    FDialogueWaveParameter DialogueWaveParameter; // 0x48
    uint8_t bLooping : 1; // 0x68
    uint8_t pad_bitfield_68_1 : 7;
    char pad_69[0x7];
    static USoundNodeDialoguePlayer* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
