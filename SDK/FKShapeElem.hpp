#pragma once
#include <cstdint>
#include "ECollisionEnabled\Type.hpp"
#pragma pack(push, 1)
struct FKShapeElem {
    char pad_0[0x8];
    float RestOffset; // 0x8
    FName Name; // 0xc
    char pad_14[0x4];
    uint8_t bContributeToMass : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    ECollisionEnabled::Type CollisionEnabled; // 0x19
    char pad_1a[0x16];
}; // Size: 0x30
#pragma pack(pop)
