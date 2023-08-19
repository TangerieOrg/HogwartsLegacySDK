#include "USceneAction_StencilFXDisableGroups.hpp"
#include "USceneAction_StencilFXGroups.hpp"
USceneAction_StencilFXDisableGroups* USceneAction_StencilFXDisableGroups::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_StencilFXDisableGroups");
    return (USceneAction_StencilFXDisableGroups*)res;
}
