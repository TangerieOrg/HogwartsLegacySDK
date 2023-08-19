#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializerRaw.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#pragma pack(push, 1)
class UWorldFXNiagaraSystemInitializerRawParameters : public UWorldFXNiagaraSystemInitializer {
public:
    FNiagaraHelpersInitializerRaw Parameters; // 0x28
    static UWorldFXNiagaraSystemInitializerRawParameters* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
