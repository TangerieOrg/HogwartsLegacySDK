#include "ENpcAbilityBranchType.hpp"
#include "UAblConditionalBranchTaskBase.hpp"
#include "UAblNpcAbilityBranchTask.hpp"
UAblNpcAbilityBranchTask* UAblNpcAbilityBranchTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcAbilityBranchTask");
    return (UAblNpcAbilityBranchTask*)res;
}
