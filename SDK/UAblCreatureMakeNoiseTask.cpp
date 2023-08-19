#include "UAblAbilityTask.hpp"
#include "UAblCreatureMakeNoiseTask.hpp"
UAblCreatureMakeNoiseTask* UAblCreatureMakeNoiseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureMakeNoiseTask");
    return (UAblCreatureMakeNoiseTask*)res;
}
