#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPlayerRenderTargetCascade;
class UTextureRenderTarget2DArray;
#pragma pack(push, 1)
class UPlayerRenderTarget : public UObject {
public:
    TArray<UPlayerRenderTargetCascade*> Cascades; // 0x28
    UTextureRenderTarget2DArray* RenderTarget; // 0x38
    UTextureRenderTarget2DArray* RenderTargetAux; // 0x40
    char pad_48[0x60];
    static UPlayerRenderTarget* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
