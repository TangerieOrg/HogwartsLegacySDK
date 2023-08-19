#include "USceneAction_SetCurrentTime.hpp"
#include "USceneRigActionBase.hpp"
#include "USchedulerTimeProvider.hpp"
USceneAction_SetCurrentTime* USceneAction_SetCurrentTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SetCurrentTime");
    return (USceneAction_SetCurrentTime*)res;
}
