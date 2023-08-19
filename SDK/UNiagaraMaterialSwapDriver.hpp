#pragma once
#include <cstdint>
#include "FMaterialSwapParameters.hpp"
#include "UNiagaraMaterialDriver.hpp"
#pragma pack(push, 1)
class UNiagaraMaterialSwapDriver : public UNiagaraMaterialDriver {
public:
    FMaterialSwapParameters ParameterSet; // 0xb8
    static UNiagaraMaterialSwapDriver* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
