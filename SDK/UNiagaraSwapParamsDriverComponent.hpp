#pragma once
#include <cstdint>
#include "FMaterialSwapParameters.hpp"
#include "UNiagaraMaterialDriverComponent.hpp"
#pragma pack(push, 1)
class UNiagaraSwapParamsDriverComponent : public UNiagaraMaterialDriverComponent {
public:
    char pad_2b0[0x50];
    static UNiagaraSwapParamsDriverComponent* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
