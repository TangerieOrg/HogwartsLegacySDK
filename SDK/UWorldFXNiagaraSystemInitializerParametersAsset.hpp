#pragma once
#include <cstdint>
#include "UWorldFXNiagaraSystemInitializer.hpp"
class UWorldFXNiagaraSystemParameters;
#pragma pack(push, 1)
class UWorldFXNiagaraSystemInitializerParametersAsset : public UWorldFXNiagaraSystemInitializer {
public:
    UWorldFXNiagaraSystemParameters* Parameters; // 0x28
    static UWorldFXNiagaraSystemInitializerParametersAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
