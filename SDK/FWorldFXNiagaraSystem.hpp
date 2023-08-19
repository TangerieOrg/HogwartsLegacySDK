#pragma once
#include <cstdint>
#include "FWorldFXCullDistance.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
#include "FWorldFXNiagaraSystemAdvancedOptions.hpp"
class UWorldFXNiagaraSystemInitializer;
#pragma pack(push, 1)
struct FWorldFXNiagaraSystem {
    char pad_0[0x28];
    UWorldFXNiagaraSystemInitializer* Initializer; // 0x28
    FWorldFXMaterialOverrideList Materials; // 0x30
    FWorldFXCullDistance CullDistance; // 0x40
    FWorldFXNiagaraSystemAdvancedOptions AdvancedOptions; // 0x48
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
