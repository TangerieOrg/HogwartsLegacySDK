#include "UNiagaraComponent.hpp"
#include "USceneActionState_NiagaraEmitter.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_NiagaraEmitter* USceneActionState_NiagaraEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_NiagaraEmitter");
    return (USceneActionState_NiagaraEmitter*)res;
}
