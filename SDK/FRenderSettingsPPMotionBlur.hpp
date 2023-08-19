#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPMotionBlur {
    uint8_t bOverride_Amount : 1; // 0x0
    uint8_t bOverride_Max : 1; // 0x0
    uint8_t bOverride_PerObjectSize : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    FName Name; // 0x4
    float Amount; // 0xc
    float Max; // 0x10
    float PerObjectSize; // 0x14
}; // Size: 0x18
#pragma pack(pop)
