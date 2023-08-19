#pragma once
#include <cstdint>
#include "UObject.hpp"
class UNiagaraScript;
class UNiagaraSystem;
#pragma pack(push, 1)
class UNiagaraPrecompileContainer : public UObject {
public:
    TArray<UNiagaraScript*> Scripts; // 0x28
    UNiagaraSystem* System; // 0x38
    static UNiagaraPrecompileContainer* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
