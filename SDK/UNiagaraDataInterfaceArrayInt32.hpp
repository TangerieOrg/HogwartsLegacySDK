#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray {
public:
    TArray<int32_t> IntData; // 0x50
    static UNiagaraDataInterfaceArrayInt32* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
