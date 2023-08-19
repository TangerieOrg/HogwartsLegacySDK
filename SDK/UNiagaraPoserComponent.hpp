#pragma once
#include <cstdint>
#include "FNiagraPoserBone.hpp"
#include "FNiagraPoserSetup.hpp"
#include "USceneComponent.hpp"
class UPoseableMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
#pragma pack(push, 1)
class UNiagaraPoserComponent : public USceneComponent {
public:
    char pad_220[0x60];
    UPoseableMeshComponent* MeshComponent; // 0x280
    UNiagaraComponent* NiagaraComponent; // 0x288
    TArray<FNiagraPoserBone> Bones; // 0x290
    FString EmitterName; // 0x2a0
    float Age; // 0x2b0
    int32_t UpdateCounter; // 0x2b4
    char pad_2b8[0x8];
    static UNiagaraPoserComponent* StaticClass();
    void Reset();
    void CreateNiagaraSystem(UNiagaraSystem* NiagaraSystem, bool pAutoActivate);
}; // Size: 0x2c0
#pragma pack(pop)
