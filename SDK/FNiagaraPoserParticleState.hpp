#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNiagaraPoserParticleState {
    TArray<FVector> Positions; // 0x0
    TArray<FQuat> Orientations; // 0x10
    TArray<FVector> Scales; // 0x20
}; // Size: 0x30
#pragma pack(pop)
