#pragma once
#include <cstdint>
#include "ENiagaraHelpersPrimMatchMode.hpp"
#include "ENiagaraHelpersPrimRule.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersPrimFilter {
    TArray<FName> Primitives; // 0x0
    ENiagaraHelpersPrimRule Rule; // 0x10
    ENiagaraHelpersPrimMatchMode MatchMode; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
