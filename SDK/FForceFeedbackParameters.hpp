#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FForceFeedbackParameters {
    FName Tag; // 0x0
    bool bLooping; // 0x8
    bool bIgnoreTimeDilation; // 0x9
    bool bPlayWhilePaused; // 0xa
    char pad_b[0x1];
}; // Size: 0xc
#pragma pack(pop)
