#pragma once
#include <cstdint>
#include "ENiagaraGpuBufferFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceGrid2D.hpp"
class UNiagaraComponent;
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D {
public:
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
    ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
    uint8_t bOverrideFormat : 1; // 0x119
    uint8_t pad_bitfield_119_1 : 7;
    char pad_11a[0xa6];
    static UNiagaraDataInterfaceGrid2DCollection* StaticClass();
    void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);
    void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);
    bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex);
    bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);
}; // Size: 0x1c0
#pragma pack(pop)
