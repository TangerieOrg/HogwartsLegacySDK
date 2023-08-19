#pragma once
#include <cstdint>
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FNiagaraMatrix {
    FVector4 Row0; // 0x0
    FVector4 Row1; // 0x10
    FVector4 Row2; // 0x20
    FVector4 Row3; // 0x30
}; // Size: 0x40
#pragma pack(pop)
