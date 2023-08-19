#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray {
public:
    TArray<float> FloatData; // 0x50
    static UNiagaraDataInterfaceArrayFloat* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
