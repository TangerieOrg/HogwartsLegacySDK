#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPropertyAccessIndirectionChain {
    char pad_0[0x20];
    int32_t IndirectionStartIndex; // 0x20
    int32_t IndirectionEndIndex; // 0x24
    int32_t EventID; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
