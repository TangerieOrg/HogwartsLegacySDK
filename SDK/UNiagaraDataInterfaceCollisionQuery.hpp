#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface {
public:
    char pad_38[0x10];
    static UNiagaraDataInterfaceCollisionQuery* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
