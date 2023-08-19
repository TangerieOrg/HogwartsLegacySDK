#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FCharacterPieceNiagaraSystem {
    UNiagaraSystem* NiagaraSystem; // 0x0
    FName SocketName; // 0x8
    FVector Location; // 0x10
    FRotator Rotation; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
