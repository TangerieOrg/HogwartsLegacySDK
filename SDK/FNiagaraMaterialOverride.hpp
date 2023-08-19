#pragma once
#include <cstdint>
class UMaterialInterface;
class UNiagaraRendererProperties;
#pragma pack(push, 1)
struct FNiagaraMaterialOverride {
    UMaterialInterface* Material; // 0x0
    uint32_t MaterialSubIndex; // 0x8
    char pad_c[0x4];
    UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
}; // Size: 0x18
#pragma pack(pop)
