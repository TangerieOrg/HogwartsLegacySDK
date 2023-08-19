#include "USceneAction_AnimateCurves.hpp"
#include "USceneAction_ModifyMaterials.hpp"
USceneAction_ModifyMaterials* USceneAction_ModifyMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ModifyMaterials");
    return (USceneAction_ModifyMaterials*)res;
}
