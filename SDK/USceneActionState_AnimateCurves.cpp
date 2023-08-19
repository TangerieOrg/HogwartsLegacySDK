#include "USceneActionState_AnimateCurves.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AnimateCurves* USceneActionState_AnimateCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimateCurves");
    return (USceneActionState_AnimateCurves*)res;
}
