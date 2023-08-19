#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFontCharacter {
    int32_t StartU; // 0x0
    int32_t StartV; // 0x4
    int32_t USize; // 0x8
    int32_t VSize; // 0xc
    uint8_t TextureIndex; // 0x10
    char pad_11[0x3];
    int32_t verticalOffset; // 0x14
}; // Size: 0x18
#pragma pack(pop)
