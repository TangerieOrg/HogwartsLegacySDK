#include "USceneActionState_RecordPoseMatch.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_RecordPoseMatch* USceneActionState_RecordPoseMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_RecordPoseMatch");
    return (USceneActionState_RecordPoseMatch*)res;
}
