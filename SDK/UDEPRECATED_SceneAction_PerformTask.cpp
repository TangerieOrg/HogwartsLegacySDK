#include "UDEPRECATED_SceneAction_PerformTask.hpp"
#include "USceneRigObjectActionBase.hpp"
UDEPRECATED_SceneAction_PerformTask* UDEPRECATED_SceneAction_PerformTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PerformTask");
    return (UDEPRECATED_SceneAction_PerformTask*)res;
}
