#pragma once
#include <cstdint>
#include "FFXPoke.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXParameter : public FFXPoke {
    FName Parameter; // 0x8
}; // Size: 0x10
#pragma pack(pop)
