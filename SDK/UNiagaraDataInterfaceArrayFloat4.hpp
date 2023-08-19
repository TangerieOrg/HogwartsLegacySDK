#pragma once
#include <cstdint>
#include "FVector4.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray {
public:
    TArray<FVector4> FloatData; // 0x50
    static UNiagaraDataInterfaceArrayFloat4* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
