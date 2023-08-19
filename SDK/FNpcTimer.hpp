#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNpcTimer {
    float TimeStart; // 0x0
    float TimeStop; // 0x4
    char pad_8[0x48];
}; // Size: 0x50
#pragma pack(pop)
