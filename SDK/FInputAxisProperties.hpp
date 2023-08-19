#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInputAxisProperties {
    float DeadZone; // 0x0
    float Sensitivity; // 0x4
    float Exponent; // 0x8
    uint8_t bInvert : 1; // 0xc
    uint8_t pad_bitfield_c_1 : 7;
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
