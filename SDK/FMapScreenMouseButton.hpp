#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMapScreenMouseButton {
    bool Pressed; // 0x0
    bool Released; // 0x1
    char pad_2[0x2];
    float PressedTime; // 0x4
    bool Clicked; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
