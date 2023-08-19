#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightmassMaterialInterfaceSettings {
    float EmissiveBoost; // 0x0
    float DiffuseBoost; // 0x4
    float ExportResolutionScale; // 0x8
    uint8_t bCastShadowAsMasked : 1; // 0xc
    uint8_t bOverrideCastShadowAsMasked : 1; // 0xc
    uint8_t bOverrideEmissiveBoost : 1; // 0xc
    uint8_t bOverrideDiffuseBoost : 1; // 0xc
    uint8_t bOverrideExportResolutionScale : 1; // 0xc
    uint8_t pad_bitfield_c_5 : 3;
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
