#include "UAblAbilityTask.hpp"
#include "UAblNpcHitPauseTask.hpp"
UAblNpcHitPauseTask* UAblNpcHitPauseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcHitPauseTask");
    return (UAblNpcHitPauseTask*)res;
}
