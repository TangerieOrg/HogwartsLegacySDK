#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStructSerializerNumericTestStruct {
    int8_t Int8; // 0x0
    char pad_1[0x1];
    int16_t Int16; // 0x2
    int32_t Int32; // 0x4
    int64_t Int64; // 0x8
    uint8_t UInt8; // 0x10
    char pad_11[0x1];
    uint16_t UInt16; // 0x12
    uint32_t UInt32; // 0x14
    uint64_t UInt64; // 0x18
    float float; // 0x20
    char pad_24[0x4];
    double Double; // 0x28
}; // Size: 0x30
#pragma pack(pop)
