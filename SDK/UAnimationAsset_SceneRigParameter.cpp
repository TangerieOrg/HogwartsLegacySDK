#include "FSceneRigParameterBinding_Animation.hpp"
#include "UAnimationAsset_SceneRigParameter.hpp"
#include "UAnimationProvider.hpp"
UAnimationAsset_SceneRigParameter* UAnimationAsset_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.AnimationAsset_SceneRigParameter");
    return (UAnimationAsset_SceneRigParameter*)res;
}
