#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "USceneRig.hpp"
#include "UWandLink_SceneRig.hpp"
UWandLink_SceneRig* UWandLink_SceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLink_SceneRig");
    return (UWandLink_SceneRig*)res;
}
