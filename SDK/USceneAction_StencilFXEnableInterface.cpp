#include "USceneAction_StencilFXBase.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
USceneAction_StencilFXEnableInterface* USceneAction_StencilFXEnableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXEnableInterface");
    return (USceneAction_StencilFXEnableInterface*)res;
}
