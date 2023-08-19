#pragma once
#include <cstdint>
class UForceFeedbackEffect;
#pragma pack(push, 1)
struct FActiveForceFeedbackEffect {
    UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
