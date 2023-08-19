#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSavePrimitiveRenderCustomDepth {
    uint32_t StencilValue; // 0x0
    uint8_t bRenderCustomDepth : 1; // 0x4
    uint8_t bManageVisibility : 1; // 0x4
    uint8_t bVisible : 1; // 0x4
    uint8_t pad_bitfield_4_3 : 5;
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
