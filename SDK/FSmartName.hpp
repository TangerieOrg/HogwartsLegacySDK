#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSmartName {
    FName DisplayName; // 0x0
    char pad_8[0x4];
}; // Size: 0xc
#pragma pack(pop)
