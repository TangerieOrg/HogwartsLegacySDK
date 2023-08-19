#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#pragma pack(push, 1)
struct FUpdateNiagaraSkinFXColorCurve {
    FName NiagaraParameter; // 0x0
    FName SkinFXParameter; // 0x8
    FRuntimeCurveLinearColor Curve; // 0x10
    bool bKillWhenDone; // 0x218
    char pad_219[0x7];
}; // Size: 0x220
#pragma pack(pop)
