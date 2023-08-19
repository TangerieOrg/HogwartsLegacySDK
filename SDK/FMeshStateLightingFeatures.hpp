#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMeshStateLightingFeatures {
    uint8_t bCastShadows : 1; // 0x0
    uint8_t bCastDynamicShadow : 1; // 0x0
    uint8_t bCastContactShadow : 1; // 0x0
    uint8_t bCastCapsuleDirectShadow : 1; // 0x0
    uint8_t bOverride_bCastShadows : 1; // 0x0
    uint8_t bOverride_bCastDynamicShadow : 1; // 0x0
    uint8_t bOverride_bCastContactShadow : 1; // 0x0
    uint8_t bOverride_bCastCapsuleDirectShadow : 1; // 0x0
}; // Size: 0x1
#pragma pack(pop)
