#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UTextureCube;
#pragma pack(push, 1)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface {
public:
    UTextureCube* Texture; // 0x38
    char pad_40[0x8];
    static UNiagaraDataInterfaceCubeTexture* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
