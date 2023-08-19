#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "FNiagaraBakerTextureSource.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FNiagaraBakerTextureSettings {
    FName OutputName; // 0x0
    FNiagaraBakerTextureSource SourceBinding; // 0x8
    uint8_t bUseFrameSize : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x3];
    FIntPoint FrameSize; // 0x14
    FIntPoint TextureSize; // 0x1c
    char pad_24[0x4];
    UTexture2D* GeneratedTexture; // 0x28
}; // Size: 0x30
#pragma pack(pop)
