#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UIntSerialization : public UObject {
public:
    uint16_t UnsignedInt16Variable; // 0x28
    char pad_2a[0x2];
    uint32_t UnsignedInt32Variable; // 0x2c
    uint64_t UnsignedInt64Variable; // 0x30
    int8_t SignedInt8Variable; // 0x38
    char pad_39[0x1];
    int16_t SignedInt16Variable; // 0x3a
    char pad_3c[0x4];
    int64_t SignedInt64Variable; // 0x40
    uint8_t UnsignedInt8Variable; // 0x48
    char pad_49[0x3];
    int32_t SignedInt32Variable; // 0x4c
    static UIntSerialization* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
