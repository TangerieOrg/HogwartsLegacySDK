#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializers.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#pragma pack(push, 1)
class UWorldFXNiagaraSystemInitializerParameters : public UWorldFXNiagaraSystemInitializer {
public:
    FNiagaraHelpersInitializers Parameters; // 0x28
    static UWorldFXNiagaraSystemInitializerParameters* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
