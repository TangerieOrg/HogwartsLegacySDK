#include "USceneAction_LightCullingDisable.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_LightCullingDisable* USceneAction_LightCullingDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LightCullingDisable");
    return (USceneAction_LightCullingDisable*)res;
}
