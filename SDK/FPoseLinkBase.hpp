#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPoseLinkBase {
    int32_t LinkID; // 0x0
    char pad_4[0xc];
}; // Size: 0x10
#pragma pack(pop)
