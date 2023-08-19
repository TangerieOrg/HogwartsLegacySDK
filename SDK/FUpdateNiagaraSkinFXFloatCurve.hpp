#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FUpdateNiagaraSkinFXFloatCurve {
    FName NiagaraParameter; // 0x0
    FName SkinFXParameter; // 0x8
    FRuntimeFloatCurve Curve; // 0x10
    bool bKillWhenDone; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
