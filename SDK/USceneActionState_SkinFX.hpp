#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class USceneActionState_SkinFX : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    FName FXName; // 0x80
    bool bHaveSetSkinFXBlueprintVariables; // 0x88
    bool bNeedsNiagaraOverride; // 0x89
    char pad_8a[0x6];
    UNiagaraSystem* NiagaraOverrideLoaded; // 0x90
    static USceneActionState_SkinFX* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
