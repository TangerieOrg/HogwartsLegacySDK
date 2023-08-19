#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface {
public:
    char pad_38[0x8];
    int32_t MaxElements; // 0x40
    char pad_44[0xc];
    static UNiagaraDataInterfaceArray* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
