#include "UAblAbilityTask.hpp"
#include "UAblSuperSlamVelocityDampenerTask.hpp"
UAblSuperSlamVelocityDampenerTask* UAblSuperSlamVelocityDampenerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamVelocityDampenerTask");
    return (UAblSuperSlamVelocityDampenerTask*)res;
}
