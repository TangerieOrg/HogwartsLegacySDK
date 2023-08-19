#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStructSerializerByteArray {
    int32_t Dummy1; // 0x0
    char pad_4[0x4];
    TArray<uint8_t> ByteArray; // 0x8
    int32_t Dummy2; // 0x18
    char pad_1c[0x4];
    TArray<int8_t> Int8Array; // 0x20
    int32_t Dummy3; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
