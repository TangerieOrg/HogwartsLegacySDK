#include "UNiagaraSystem.hpp"
#include "USceneActionState_SkinFX.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_SkinFX* USceneActionState_SkinFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SkinFX");
    return (USceneActionState_SkinFX*)res;
}
