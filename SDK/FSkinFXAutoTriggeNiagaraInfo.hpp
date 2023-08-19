#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FSkinFXAutoTriggeNiagaraInfo {
    UNiagaraSystem* NiagaraSystem; // 0x0
    FName AttachPointName; // 0x8
    FVector Location; // 0x10
    FRotator Rotation; // 0x1c
    FVector Scale; // 0x28
    EAttachLocation::Type LocationType; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
