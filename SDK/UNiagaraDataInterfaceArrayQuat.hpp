#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray {
public:
    TArray<FQuat> QuatData; // 0x50
    static UNiagaraDataInterfaceArrayQuat* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
