#pragma once
#include <cstdint>
#include "FLandscapeMaterialTextureStreamingInfo.hpp"
#include "UMaterialInstanceConstant.hpp"
#pragma pack(push, 1)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {
public:
    TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x438
    uint8_t bIsLayerThumbnail : 1; // 0x448
    uint8_t bDisableTessellation : 1; // 0x448
    uint8_t bMobile : 1; // 0x448
    uint8_t bEditorToolUsage : 1; // 0x448
    uint8_t pad_bitfield_448_4 : 4;
    char pad_449[0x7];
    static ULandscapeMaterialInstanceConstant* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
