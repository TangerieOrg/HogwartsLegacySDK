#pragma once
#include <cstdint>
class UTexture2D;
#pragma pack(push, 1)
struct FHairGroupCardsTextures {
    UTexture2D* DepthTexture; // 0x0
    UTexture2D* CoverageTexture; // 0x8
    UTexture2D* TangentTexture; // 0x10
    UTexture2D* AttributeTexture; // 0x18
    UTexture2D* AuxilaryDataTexture; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
