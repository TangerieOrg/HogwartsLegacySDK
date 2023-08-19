#pragma once
#include <cstdint>
#include "FWorldFXAudioPreview.hpp"
#include "FWorldFXCascadePreview.hpp"
#include "FWorldFXNiagaraPreview.hpp"
#pragma pack(push, 1)
struct FWorldFXFullPreview {
    FWorldFXAudioPreview SFXPreview; // 0x0
    FWorldFXCascadePreview CascadeFXPreview; // 0x70
    FWorldFXNiagaraPreview NiagaraFXPreview; // 0xe8
}; // Size: 0x150
#pragma pack(pop)
