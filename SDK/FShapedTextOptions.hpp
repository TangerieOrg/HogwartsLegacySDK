#pragma once
#include <cstdint>
#include "ETextFlowDirection.hpp"
#include "ETextShapingMethod.hpp"
#pragma pack(push, 1)
struct FShapedTextOptions {
    uint8_t bOverride_TextShapingMethod : 1; // 0x0
    uint8_t bOverride_TextFlowDirection : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    ETextShapingMethod TextShapingMethod; // 0x1
    ETextFlowDirection TextFlowDirection; // 0x2
}; // Size: 0x3
#pragma pack(pop)
