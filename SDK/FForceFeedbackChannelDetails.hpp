#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FForceFeedbackChannelDetails {
    uint8_t bAffectsLeftLarge : 1; // 0x0
    uint8_t bAffectsLeftSmall : 1; // 0x0
    uint8_t bAffectsRightLarge : 1; // 0x0
    uint8_t bAffectsRightSmall : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x7];
    FRuntimeFloatCurve Curve; // 0x8
}; // Size: 0x90
#pragma pack(pop)
