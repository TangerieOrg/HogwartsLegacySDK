#pragma once
#include <cstdint>
#include "UNiagaraMergeable.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable {
public:
    static UNiagaraDataInterfaceBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
