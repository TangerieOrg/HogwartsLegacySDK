#include "FRotator.hpp"
#include "UNiagaraSystem.hpp"
#include "USceneAction_NiagaraSystem.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_NiagaraSystem* USceneAction_NiagaraSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_NiagaraSystem");
    return (USceneAction_NiagaraSystem*)res;
}
