#pragma once
#include <cstdint>
#include "ENiagaraDataSetType.hpp"
#pragma pack(push, 1)
struct FNiagaraDataSetID {
    FName Name; // 0x0
    ENiagaraDataSetType Type; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
