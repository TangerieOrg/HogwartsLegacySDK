#include "FAnimationRequestLayerReference.hpp"
#include "FSceneActionAnimCurve.hpp"
#include "USceneAction_AnimCurves.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AnimCurves* USceneAction_AnimCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AnimCurves");
    return (USceneAction_AnimCurves*)res;
}
