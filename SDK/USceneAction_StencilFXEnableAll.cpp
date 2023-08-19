#include "USceneAction_StencilFXEnableAll.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
USceneAction_StencilFXEnableAll* USceneAction_StencilFXEnableAll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXEnableAll");
    return (USceneAction_StencilFXEnableAll*)res;
}
