#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FOptionalTriplet {
    bool bValidA; // 0x0
    char pad_1[0x3];
    float ValueA; // 0x4
    bool bValidB; // 0x8
    char pad_9[0x3];
    float ValueB; // 0xc
    bool bValidC; // 0x10
    char pad_11[0x3];
    float ValueC; // 0x14
}; // Size: 0x18
#pragma pack(pop)
