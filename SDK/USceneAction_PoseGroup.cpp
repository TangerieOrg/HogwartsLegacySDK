#include "UPoseGroupProvider.hpp"
#include "USceneAction_PoseGroup.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_PoseGroup* USceneAction_PoseGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_PoseGroup");
    return (USceneAction_PoseGroup*)res;
}
