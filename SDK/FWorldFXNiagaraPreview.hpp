#pragma once
#include <cstdint>
#include "FWorldFXNiagaraSystem.hpp"
#include "FWorldFXPreview.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
struct FWorldFXNiagaraPreview : public FWorldFXPreview {
    UNiagaraComponent* NiagaraFXPreview; // 0x8
    FWorldFXNiagaraSystem CurrentFX; // 0x10
}; // Size: 0x68
#pragma pack(pop)
