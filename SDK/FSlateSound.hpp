#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FSlateSound {
    UObject* ResourceObject; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
