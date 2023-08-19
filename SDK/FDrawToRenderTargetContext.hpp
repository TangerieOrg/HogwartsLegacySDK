#pragma once
#include <cstdint>
class UTextureRenderTarget2D;
#pragma pack(push, 1)
struct FDrawToRenderTargetContext {
    UTextureRenderTarget2D* RenderTarget; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
