#pragma once
#include <cstdint>
#include "ETextureRenderTargetFormat.hpp"
#include "FIntVector.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase {
public:
    FIntVector Size; // 0xd8
    ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
    uint8_t bInheritUserParameterSettings : 1; // 0xe5
    uint8_t bOverrideFormat : 1; // 0xe5
    uint8_t pad_bitfield_e5_2 : 6;
    char pad_e6[0x2];
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
    char pad_108[0x50];
    static UNiagaraDataInterfaceRenderTargetVolume* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
