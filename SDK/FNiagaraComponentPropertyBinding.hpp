#pragma once
#include <cstdint>
#include "FNiagaraTypeDefinition.hpp"
#include "FNiagaraVariable.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#pragma pack(push, 1)
struct FNiagaraComponentPropertyBinding {
    FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
    FName PropertyName; // 0x58
    FNiagaraTypeDefinition PropertyType; // 0x60
    FName MetadataSetterName; // 0x70
    char pad_78[0x50];
    FNiagaraVariable WritableValue; // 0xc8
}; // Size: 0xe8
#pragma pack(pop)
