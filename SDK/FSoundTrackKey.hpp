#pragma once
#include <cstdint>
class USoundBase;
#pragma pack(push, 1)
struct FSoundTrackKey {
    float Time; // 0x0
    float Volume; // 0x4
    float Pitch; // 0x8
    char pad_c[0x4];
    USoundBase* Sound; // 0x10
}; // Size: 0x18
#pragma pack(pop)
