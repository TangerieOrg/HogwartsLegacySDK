#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#pragma pack(push, 1)
struct FUpdateNiagaraFXColorCurve {
    FName Parameter; // 0x0
    FRuntimeCurveLinearColor Curve; // 0x8
    bool bKillWhenDone; // 0x210
    char pad_211[0x7];
}; // Size: 0x218
#pragma pack(pop)
