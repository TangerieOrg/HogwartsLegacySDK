#pragma once
#include <cstdint>
#include "TextureCompressionSettings.hpp"
#pragma pack(push, 1)
struct FTextureFormatSettings {
    TextureCompressionSettings CompressionSettings; // 0x0
    uint8_t CompressionNoAlpha : 1; // 0x1
    uint8_t CompressionNone : 1; // 0x1
    uint8_t CompressionYCoCg : 1; // 0x1
    uint8_t SRGB : 1; // 0x1
    uint8_t pad_bitfield_1_4 : 4;
}; // Size: 0x2
#pragma pack(pop)
