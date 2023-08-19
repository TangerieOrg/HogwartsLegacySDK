#include "USceneActionState_AnimateCurves.hpp"
#include "USceneActionState_ModifyMaterials.hpp"
USceneActionState_ModifyMaterials* USceneActionState_ModifyMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ModifyMaterials");
    return (USceneActionState_ModifyMaterials*)res;
}
