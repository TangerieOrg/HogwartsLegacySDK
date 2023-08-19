#include "USceneActionState_PerformTask.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PerformTask* USceneActionState_PerformTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PerformTask");
    return (USceneActionState_PerformTask*)res;
}
