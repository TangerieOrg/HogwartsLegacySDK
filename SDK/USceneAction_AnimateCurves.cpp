#include "USceneAction_AnimateCurves.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AnimateCurves* USceneAction_AnimateCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AnimateCurves");
    return (USceneAction_AnimateCurves*)res;
}
