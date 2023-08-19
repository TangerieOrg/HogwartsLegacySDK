#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightCullingPerLightAdvancedSettings {
    uint8_t bDisableMoveableCulling : 1; // 0x0
    uint8_t bDisableTickInterfaceCulling : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
}; // Size: 0x1
#pragma pack(pop)
