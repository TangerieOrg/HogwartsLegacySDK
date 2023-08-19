#include "UAblAbilityTask.hpp"
#include "UAblSyncCameraTimeDilationTask.hpp"
UAblSyncCameraTimeDilationTask* UAblSyncCameraTimeDilationTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSyncCameraTimeDilationTask");
    return (UAblSyncCameraTimeDilationTask*)res;
}
