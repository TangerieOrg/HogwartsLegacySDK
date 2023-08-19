#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FNiagaraRibbonShapeCustomVertex {
    FVector2D Position; // 0x0
    FVector2D Normal; // 0x8
    float TextureV; // 0x10
}; // Size: 0x14
#pragma pack(pop)
