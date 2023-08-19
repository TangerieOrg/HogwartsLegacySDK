#pragma once
#include <cstdint>
class UHapticFeedbackEffect_Base;
#pragma pack(push, 1)
struct FActiveHapticFeedbackEffect {
    UHapticFeedbackEffect_Base* HapticEffect; // 0x0
    char pad_8[0x38];
}; // Size: 0x40
#pragma pack(pop)
