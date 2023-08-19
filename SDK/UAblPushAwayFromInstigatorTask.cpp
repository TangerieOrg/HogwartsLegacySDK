#include "UAblAbilityTask.hpp"
#include "UAblPushAwayFromInstigatorTask.hpp"
UAblPushAwayFromInstigatorTask* UAblPushAwayFromInstigatorTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPushAwayFromInstigatorTask");
    return (UAblPushAwayFromInstigatorTask*)res;
}
