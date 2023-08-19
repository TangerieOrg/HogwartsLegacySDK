#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStructSerializerBooleanTestStruct {
    bool BoolFalse; // 0x0
    bool BoolTrue; // 0x1
    uint8_t Bitfield0 : 1; // 0x2
    uint8_t Bitfield1 : 1; // 0x2
    uint8_t Bitfield2Set : 1; // 0x2
    uint8_t Bitfield3 : 1; // 0x2
    uint8_t Bitfield4Set : 1; // 0x2
    uint8_t Bitfield5Set : 1; // 0x2
    uint8_t Bitfield6 : 1; // 0x2
    uint8_t Bitfield7Set : 1; // 0x2
}; // Size: 0x3
#pragma pack(pop)
