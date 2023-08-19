#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigControlValueStorage {
    float Float00; // 0x0
    float Float01; // 0x4
    float Float02; // 0x8
    float Float03; // 0xc
    float Float10; // 0x10
    float Float11; // 0x14
    float Float12; // 0x18
    float Float13; // 0x1c
    float Float20; // 0x20
    float Float21; // 0x24
    float Float22; // 0x28
    float Float23; // 0x2c
    float Float30; // 0x30
    float Float31; // 0x34
    float Float32; // 0x38
    float Float33; // 0x3c
    bool bValid; // 0x40
    char pad_41[0x3];
}; // Size: 0x44
#pragma pack(pop)
