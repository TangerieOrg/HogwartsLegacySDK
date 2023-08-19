#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UTexture2DArray;
class UTextureRenderTarget2DArray;
#pragma pack(push, 1)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface {
public:
    UTexture2DArray* Texture; // 0x38
    UTextureRenderTarget2DArray* RenderTargetTexture; // 0x40
    char pad_48[0x10];
    static UNiagaraDataInterface2DArrayTexture* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
