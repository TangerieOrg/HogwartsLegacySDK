#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UVolumeTexture;
#pragma pack(push, 1)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface {
public:
    UVolumeTexture* Texture; // 0x38
    char pad_40[0x10];
    static UNiagaraDataInterfaceVolumeTexture* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
