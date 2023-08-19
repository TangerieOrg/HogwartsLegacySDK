#include "FStencilManagerGroupName.hpp"
#include "USceneAction_StencilFXDisableAll.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
USceneAction_StencilFXDisableAll* USceneAction_StencilFXDisableAll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXDisableAll");
    return (USceneAction_StencilFXDisableAll*)res;
}
