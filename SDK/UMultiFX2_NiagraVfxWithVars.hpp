#pragma once
#include <cstdint>
#include "UMultiFX2_NiagraBase.hpp"
class UNiagaraSystemWithVars;
#pragma pack(push, 1)
class UMultiFX2_NiagraVfxWithVars : public UMultiFX2_NiagraBase {
public:
    UNiagaraSystemWithVars* NiagaraVfxWithVars; // 0x80
    bool bAttached; // 0x88
    bool bIgnoreDeactivate; // 0x89
    char pad_8a[0x6];
    static UMultiFX2_NiagraVfxWithVars* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
