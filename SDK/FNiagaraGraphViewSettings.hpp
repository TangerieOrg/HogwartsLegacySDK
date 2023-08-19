#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FNiagaraGraphViewSettings {
    FVector2D Location; // 0x0
    float Zoom; // 0x8
    bool bIsValid; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
