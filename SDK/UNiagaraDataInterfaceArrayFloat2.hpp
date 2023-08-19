#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray {
public:
    TArray<FVector2D> FloatData; // 0x50
    static UNiagaraDataInterfaceArrayFloat2* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
