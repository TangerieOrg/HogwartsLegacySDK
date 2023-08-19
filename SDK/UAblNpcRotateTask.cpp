#include "UAblAbilityTask.hpp"
#include "UAblNpcRotateTask.hpp"
UAblNpcRotateTask* UAblNpcRotateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcRotateTask");
    return (UAblNpcRotateTask*)res;
}
