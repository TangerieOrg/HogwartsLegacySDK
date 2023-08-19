#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray {
public:
    TArray<bool> BoolData; // 0x50
    static UNiagaraDataInterfaceArrayBool* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
