#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWindParametersInstant {
    char pad_0[0x8];
    float Angle; // 0x8
    float SpeedMS; // 0xc
}; // Size: 0x10
#pragma pack(pop)
