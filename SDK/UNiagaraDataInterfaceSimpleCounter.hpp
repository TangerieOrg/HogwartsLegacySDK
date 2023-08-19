#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface {
public:
    static UNiagaraDataInterfaceSimpleCounter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
