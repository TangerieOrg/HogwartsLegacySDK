#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase {
public:
    FIntPoint Size; // 0xd8
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0
    char pad_100[0x50];
    static UNiagaraDataInterfaceIntRenderTarget2D* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
