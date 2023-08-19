#pragma once
#include <cstdint>
class UNiagaraComponent;
#pragma pack(push, 1)
struct FNCPoolElement {
    UNiagaraComponent* Component; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
