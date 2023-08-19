#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "FNiagaraSystemSpawnBoundsSpawnRate.hpp"
#include "FNiagaraSystemSpawnInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnAttachedInfo : public FNiagaraSystemSpawnInfo {
    char pad_50[0x20];
}; // Size: 0x70
#pragma pack(pop)
