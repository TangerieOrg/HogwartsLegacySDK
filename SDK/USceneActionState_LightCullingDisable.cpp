#include "USceneActionState_LightCullingDisable.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_LightCullingDisable* USceneActionState_LightCullingDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_LightCullingDisable");
    return (USceneActionState_LightCullingDisable*)res;
}
