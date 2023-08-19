#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class USceneActionState_NiagaraEmitter : public USceneRigObjectActionState {
public:
    UNiagaraComponent* NiagaraComponent; // 0x70
    static USceneActionState_NiagaraEmitter* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
