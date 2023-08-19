#pragma once
#include <cstdint>
#include "ECollisionEnabled\Type.hpp"
#pragma pack(push, 1)
struct FPortraitPaintingComponentState {
    float BoundsScale; // 0x0
    ECollisionEnabled::Type CollisionEnabled; // 0x4
    uint8_t bUseAttachParentBound : 1; // 0x5
    uint8_t bCastShadow : 1; // 0x5
    uint8_t bCastContactShadow : 1; // 0x5
    uint8_t bCastCapsuleDirectShadow : 1; // 0x5
    uint8_t bReceivesDecals : 1; // 0x5
    uint8_t bReceivesWeatherDecals : 1; // 0x5
    uint8_t bIgnoreLightLeakingCorrection : 1; // 0x5
    uint8_t bSetCollisionEnabled : 1; // 0x5
    char pad_6[0x2];
}; // Size: 0x8
#pragma pack(pop)
