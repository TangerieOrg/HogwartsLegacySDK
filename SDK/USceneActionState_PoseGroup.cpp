#include "UPoseGroup.hpp"
#include "USceneActionState_PoseGroup.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PoseGroup* USceneActionState_PoseGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_PoseGroup");
    return (USceneActionState_PoseGroup*)res;
}
