#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray {
public:
    TArray<FVector> FloatData; // 0x50
    static UNiagaraDataInterfaceArrayFloat3* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
