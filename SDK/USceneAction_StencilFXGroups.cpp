#include "FStencilManagerGroupName.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
#include "USceneAction_StencilFXGroups.hpp"
USceneAction_StencilFXGroups* USceneAction_StencilFXGroups::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXGroups");
    return (USceneAction_StencilFXGroups*)res;
}
