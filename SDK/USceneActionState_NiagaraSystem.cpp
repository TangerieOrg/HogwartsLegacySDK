#include "UNiagaraComponent.hpp"
#include "USceneActionState_NiagaraSystem.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_NiagaraSystem* USceneActionState_NiagaraSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_NiagaraSystem");
    return (USceneActionState_NiagaraSystem*)res;
}
