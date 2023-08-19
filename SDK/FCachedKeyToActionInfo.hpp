#pragma once
#include <cstdint>
class UPlayerInput;
#pragma pack(push, 1)
struct FCachedKeyToActionInfo {
    UPlayerInput* PlayerInput; // 0x0
    char pad_8[0x68];
}; // Size: 0x70
#pragma pack(pop)
