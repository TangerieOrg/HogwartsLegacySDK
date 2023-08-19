#pragma once
#include <cstdint>
class UNiagaraSystem;
#pragma pack(push, 1)
struct FExplodingSkeletonPieceFXBase {
    UNiagaraSystem* NiagaraVFX; // 0x0
    FName OpacityParameter; // 0x8
}; // Size: 0x10
#pragma pack(pop)
