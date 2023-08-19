#include "UPoseSampler_AnimCurves.hpp"
#include "USceneActionState_AnimCurves.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AnimCurves* USceneActionState_AnimCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimCurves");
    return (USceneActionState_AnimCurves*)res;
}
