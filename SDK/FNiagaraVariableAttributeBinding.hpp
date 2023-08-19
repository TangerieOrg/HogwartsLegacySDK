#pragma once
#include <cstdint>
#include "ENiagaraBindingSource.hpp"
#include "FNiagaraVariable.hpp"
#include "FNiagaraVariableBase.hpp"
#pragma pack(push, 1)
struct FNiagaraVariableAttributeBinding {
    FNiagaraVariableBase ParamMapVariable; // 0x0
    char pad_c[0x4];
    FNiagaraVariable DataSetVariable; // 0x10
    FNiagaraVariable RootVariable; // 0x30
    ENiagaraBindingSource BindingSourceMode; // 0x50
    char pad_51[0x3];
    uint8_t bBindingExistsOnSource : 1; // 0x54
    uint8_t bIsCachedParticleValue : 1; // 0x54
    uint8_t pad_bitfield_54_2 : 6;
    char pad_55[0x3];
}; // Size: 0x58
#pragma pack(pop)
