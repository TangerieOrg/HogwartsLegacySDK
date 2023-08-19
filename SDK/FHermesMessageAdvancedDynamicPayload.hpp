#pragma once
#include <cstdint>
#include "EHermesMessageAdvancedDynamicPayloadType.hpp"
#pragma pack(push, 1)
struct FHermesMessageAdvancedDynamicPayload {
    EHermesMessageAdvancedDynamicPayloadType Type; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    bool Boolean; // 0xc
    char pad_d[0x3];
    int32_t Integer; // 0x10
    float Scalar; // 0x14
}; // Size: 0x18
#pragma pack(pop)
