#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class USceneActionState_NiagaraSystem : public USceneRigActionState {
public:
    UNiagaraComponent* NiagaraComponent; // 0x50
    static USceneActionState_NiagaraSystem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
