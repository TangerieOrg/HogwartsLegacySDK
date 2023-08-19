#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface {
public:
    char pad_38[0xa0];
    static UNiagaraDataInterfaceRWBase* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
