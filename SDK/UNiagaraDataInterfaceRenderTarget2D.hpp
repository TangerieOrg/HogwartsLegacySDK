#pragma once
#include <cstdint>
#include "ENiagaraMipMapGeneration.hpp"
#include "ETextureRenderTargetFormat.hpp"
#include "FIntPoint.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase {
public:
    FIntPoint Size; // 0xd8
    ENiagaraMipMapGeneration MipMapGeneration; // 0xe0
    ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe1
    uint8_t bInheritUserParameterSettings : 1; // 0xe2
    uint8_t bOverrideFormat : 1; // 0xe2
    uint8_t pad_bitfield_e2_2 : 6;
    char pad_e3[0x5];
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
    char pad_108[0xa0];
    static UNiagaraDataInterfaceRenderTarget2D* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
