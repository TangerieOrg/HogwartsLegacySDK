#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UTexture;
#pragma pack(push, 1)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface {
public:
    UTexture* Texture; // 0x38
    char pad_40[0x8];
    static UNiagaraDataInterfaceTexture* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
