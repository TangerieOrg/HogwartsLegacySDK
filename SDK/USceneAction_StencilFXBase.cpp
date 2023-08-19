#include "USceneAction_StencilFXBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_StencilFXBase* USceneAction_StencilFXBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXBase");
    return (USceneAction_StencilFXBase*)res;
}
