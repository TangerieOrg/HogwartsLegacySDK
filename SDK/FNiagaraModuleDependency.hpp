#pragma once
#include <cstdint>
#include "ENiagaraModuleDependencyScriptConstraint.hpp"
#include "ENiagaraModuleDependencyType.hpp"
#pragma pack(push, 1)
struct FNiagaraModuleDependency {
    FName ID; // 0x0
    ENiagaraModuleDependencyType Type; // 0x8
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
    char pad_a[0x1e];
}; // Size: 0x28
#pragma pack(pop)
