#include "UActorProvider.hpp"
#include "USceneAction_PerformTaskFinishCurrentTask.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PerformTaskFinishCurrentTask* USceneAction_PerformTaskFinishCurrentTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PerformTaskFinishCurrentTask");
    return (USceneAction_PerformTaskFinishCurrentTask*)res;
}
