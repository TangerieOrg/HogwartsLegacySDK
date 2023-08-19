#pragma once
#include <cstdint>
#include "FNiagraPoserParticleQuery.hpp"
class USkeletalMesh;
class UNiagaraSystem;
#pragma pack(push, 1)
struct FNiagraPoserSetup {
    USkeletalMesh* SkeletalMesh; // 0x0
    TArray<FName> OnlyAnimateBones; // 0x8
    TArray<FName> DoNotAnimateBones; // 0x18
    UNiagaraSystem* NiagaraSystem; // 0x28
    FString UseSpecificEmitter; // 0x30
    FNiagraPoserParticleQuery ParticleQuery; // 0x40
    float InitialDelay; // 0x5c
    float LerpTime; // 0x60
    bool bApplyAlphabetically; // 0x64
    bool bHideUndrivenBones; // 0x65
    bool bOnlyAnimateBones; // 0x66
    bool bDoNotAnimateBones; // 0x67
}; // Size: 0x68
#pragma pack(pop)
