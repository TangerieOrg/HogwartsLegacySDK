#pragma once
#include <cstdint>
#include "UWorldFXOctreeFX.hpp"
#pragma pack(push, 1)
class UWorldFXOctreeFXNiagaraManaged : public UWorldFXOctreeFX {
public:
    char pad_50[0x8];
    static UWorldFXOctreeFXNiagaraManaged* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
