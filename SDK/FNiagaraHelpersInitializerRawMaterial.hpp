#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerRawMaterial {
    FName Variable; // 0x0
    UMaterialInterface* Value; // 0x8
}; // Size: 0x10
#pragma pack(pop)
