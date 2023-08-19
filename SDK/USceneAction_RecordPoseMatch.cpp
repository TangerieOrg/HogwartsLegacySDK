#include "USceneAction_RecordPoseMatch.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_RecordPoseMatch* USceneAction_RecordPoseMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_RecordPoseMatch");
    return (USceneAction_RecordPoseMatch*)res;
}
