#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "MediaTextureOrientation.hpp"
#include "MediaTextureOutputFormat.hpp"
#include "TextureAddress.hpp"
#include "UTexture.hpp"
class UMediaPlayer;
#pragma pack(push, 1)
class UMediaTexture : public UTexture {
public:
    char pad_180[0xc];
    bool EnableGenMips; // 0x18c
    uint8_t NumMips; // 0x18d
    bool NewStyleOutput; // 0x18e
    MediaTextureOutputFormat OutputFormat; // 0x18f
    float CurrentAspectRatio; // 0x190
    MediaTextureOrientation CurrentOrientation; // 0x194
    char pad_195[0x3];
    UMediaPlayer* MediaPlayer; // 0x198
    char pad_1a0[0xc0];
    static UMediaTexture* StaticClass();
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    int32_t GetWidth();
    int32_t GetTextureNumMips();
    UMediaPlayer* GetMediaPlayer();
    int32_t GetHeight();
    float GetAspectRatio();
}; // Size: 0x260
#pragma pack(pop)
