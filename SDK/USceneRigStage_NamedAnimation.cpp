#include "FSceneRigStage_Animation.hpp"
#include "USceneRigStage_NamedAnimation.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedAnimation* USceneRigStage_NamedAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedAnimation");
    return (USceneRigStage_NamedAnimation*)res;
}
