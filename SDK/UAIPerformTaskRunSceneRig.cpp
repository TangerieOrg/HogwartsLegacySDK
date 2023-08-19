#include "ASceneRigActor.hpp"
#include "EPerformTaskSceneRigSetting.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskRunSceneRig.hpp"
UAIPerformTaskRunSceneRig* UAIPerformTaskRunSceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskRunSceneRig");
    return (UAIPerformTaskRunSceneRig*)res;
}
