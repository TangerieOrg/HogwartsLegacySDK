#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "TextureAddress.hpp"
#include "UTexture.hpp"
class UBinkMediaPlayer;
#pragma pack(push, 1)
class UBinkMediaTexture : public UTexture {
public:
    UBinkMediaPlayer* MediaPlayer; // 0x180
    EPixelFormat PixelFormat; // 0x188
    bool ToneMap; // 0x189
    char pad_18a[0x2];
    float OutputNits; // 0x18c
    float Alpha; // 0x190
    bool DecodeSRGB; // 0x194
    char pad_195[0x1b];
    static UBinkMediaTexture* StaticClass();
    void SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer);
    void Clear();
}; // Size: 0x1b0
#pragma pack(pop)
