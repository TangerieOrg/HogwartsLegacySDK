#pragma once
#include <cstdint>
#include "UMultiFX2_NiagraBase.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class UMultiFX2_NiagraVfx : public UMultiFX2_NiagraBase {
public:
    UNiagaraSystem* NiagaraVFX; // 0x80
    char pad_88[0x28];
    bool bAttached; // 0xb0
    bool bIgnoreDeactivate; // 0xb1
    char pad_b2[0x6];
    static UMultiFX2_NiagraVfx* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
