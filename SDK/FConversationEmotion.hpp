#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#pragma pack(push, 1)
struct FConversationEmotion {
    EFacialEmotion Emotion; // 0x0
    char pad_1[0x3];
    float HoldTime; // 0x4
}; // Size: 0x8
#pragma pack(pop)
