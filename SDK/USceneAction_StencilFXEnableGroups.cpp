#include "USceneAction_StencilFXEnableGroups.hpp"
#include "USceneAction_StencilFXGroups.hpp"
USceneAction_StencilFXEnableGroups* USceneAction_StencilFXEnableGroups::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXEnableGroups");
    return (USceneAction_StencilFXEnableGroups*)res;
}
