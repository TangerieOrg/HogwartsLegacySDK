#include "USceneActionState_StencilFXEnableInterface.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_StencilFXEnableInterface* USceneActionState_StencilFXEnableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_StencilFXEnableInterface");
    return (USceneActionState_StencilFXEnableInterface*)res;
}
