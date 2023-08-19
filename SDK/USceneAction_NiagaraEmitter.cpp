#include "FTransform.hpp"
#include "UNiagaraSystem.hpp"
#include "USceneAction_NiagaraEmitter.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_NiagaraEmitter* USceneAction_NiagaraEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_NiagaraEmitter");
    return (USceneAction_NiagaraEmitter*)res;
}
