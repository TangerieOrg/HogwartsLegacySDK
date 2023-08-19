#pragma once
#include <cstdint>
#include "UFXEnd.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class UMultiFX2End_NiagraVfx : public UFXEnd {
public:
    UNiagaraSystem* NiagaraVFX; // 0x28
    bool bAttached; // 0x30
    char pad_31[0x7];
    static UMultiFX2End_NiagraVfx* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
