#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "ETextureRenderTargetFormat.hpp"
#include "FLinearColor.hpp"
#include "TextureAddress.hpp"
#include "TextureFilter.hpp"
#include "UTextureRenderTarget.hpp"
#pragma pack(push, 1)
class UTextureRenderTarget2D : public UTextureRenderTarget {
public:
    int32_t SizeX; // 0x180
    int32_t SizeY; // 0x184
    FLinearColor ClearColor; // 0x188
    TextureAddress AddressX; // 0x198
    TextureAddress AddressY; // 0x199
    uint8_t bForceLinearGamma : 1; // 0x19a
    uint8_t bHDR : 1; // 0x19a
    uint8_t bGPUSharedFlag : 1; // 0x19a
    uint8_t pad_bitfield_19a_3 : 5;
    ETextureRenderTargetFormat RenderTargetFormat; // 0x19b
    uint8_t bAutoGenerateMips : 1; // 0x19c
    uint8_t pad_bitfield_19c_1 : 7;
    TextureFilter MipsSamplerFilter; // 0x19d
    TextureAddress MipsAddressU; // 0x19e
    TextureAddress MipsAddressV; // 0x19f
    EPixelFormat OverrideFormat; // 0x1a0
    char pad_1a1[0xf];
    static UTextureRenderTarget2D* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
