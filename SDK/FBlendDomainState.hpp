#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBlendDomainState {
    char pad_0[0xf0];
    bool bLowQuality; // 0xf0
    char pad_f1[0x7];
}; // Size: 0xf8
#pragma pack(pop)
