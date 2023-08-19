#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray {
public:
    TArray<FLinearColor> ColorData; // 0x50
    static UNiagaraDataInterfaceArrayColor* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
