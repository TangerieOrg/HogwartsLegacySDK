#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FUpdateNiagaraFXFloatCurve {
    FName Parameter; // 0x0
    FRuntimeFloatCurve Curve; // 0x8
    bool bKillWhenDone; // 0x90
    char pad_91[0x7];
}; // Size: 0x98
#pragma pack(pop)
