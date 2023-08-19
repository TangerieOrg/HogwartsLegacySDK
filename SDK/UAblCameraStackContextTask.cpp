#include "EAblCameraStackContextOperation.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCameraStackContextTask.hpp"
UAblCameraStackContextTask* UAblCameraStackContextTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCameraStackContextTask");
    return (UAblCameraStackContextTask*)res;
}
