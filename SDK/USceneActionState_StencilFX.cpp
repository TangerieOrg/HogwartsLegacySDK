#include "USceneActionState_StencilFX.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_StencilFX* USceneActionState_StencilFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_StencilFX");
    return (USceneActionState_StencilFX*)res;
}
