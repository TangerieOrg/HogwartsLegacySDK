#pragma once
#include <cstdint>
#include "ENiagaraMaterialDriverParameterType.hpp"
#pragma pack(push, 1)
struct FNiagaraMaterialDriverParameter {
    FName NiagaraVariableName; // 0x0
    ENiagaraMaterialDriverParameterType Type; // 0x8
    char pad_9[0x3];
    FName MaterialParameter; // 0xc
    float Scale; // 0x14
    bool bEnabled; // 0x18
    bool bScale; // 0x19
    char pad_1a[0x2];
}; // Size: 0x1c
#pragma pack(pop)
