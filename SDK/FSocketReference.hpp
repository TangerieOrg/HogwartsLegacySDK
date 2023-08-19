#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSocketReference {
    char pad_0[0x30];
    FName SocketName; // 0x30
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
