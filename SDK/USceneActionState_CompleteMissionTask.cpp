#include "USceneActionState_CompleteMissionTask.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_CompleteMissionTask* USceneActionState_CompleteMissionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CompleteMissionTask");
    return (USceneActionState_CompleteMissionTask*)res;
}
