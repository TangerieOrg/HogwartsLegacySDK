#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStance.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCreatureCurrentAnimStateTask.hpp"
UAblCreatureCurrentAnimStateTask* UAblCreatureCurrentAnimStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureCurrentAnimStateTask");
    return (UAblCreatureCurrentAnimStateTask*)res;
}
