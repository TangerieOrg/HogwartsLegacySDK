#include "FMissionName.hpp"
#include "USceneAction_CompleteMissionTask.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_CompleteMissionTask* USceneAction_CompleteMissionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CompleteMissionTask");
    return (USceneAction_CompleteMissionTask*)res;
}
