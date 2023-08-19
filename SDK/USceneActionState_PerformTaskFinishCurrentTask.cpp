#include "USceneActionState_PerformTaskFinishCurrentTask.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PerformTaskFinishCurrentTask* USceneActionState_PerformTaskFinishCurrentTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PerformTaskFinishCurrentTask");
    return (USceneActionState_PerformTaskFinishCurrentTask*)res;
}
