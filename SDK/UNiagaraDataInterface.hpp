#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase {
public:
    char pad_28[0x10];
    static UNiagaraDataInterface* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
