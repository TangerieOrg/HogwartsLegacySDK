#pragma once
#include <cstdint>
#include "ETextureRenderTargetFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase {
public:
    int32_t Size; // 0xd8
    ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xdc
    uint8_t bInheritUserParameterSettings : 1; // 0xdd
    uint8_t bOverrideFormat : 1; // 0xdd
    uint8_t pad_bitfield_dd_2 : 6;
    char pad_de[0x2];
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0
    char pad_100[0x50];
    static UNiagaraDataInterfaceRenderTargetCube* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
