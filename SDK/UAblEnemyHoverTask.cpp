#include "EEnemyHoverTaskMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblEnemyHoverTask.hpp"
#include "UNiagaraSystem.hpp"
UAblEnemyHoverTask* UAblEnemyHoverTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyHoverTask");
    return (UAblEnemyHoverTask*)res;
}
