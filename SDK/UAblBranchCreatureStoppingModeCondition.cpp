#include "ECreatureStoppingMode.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchCreatureStoppingModeCondition.hpp"
UAblBranchCreatureStoppingModeCondition* UAblBranchCreatureStoppingModeCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreatureStoppingModeCondition");
    return (UAblBranchCreatureStoppingModeCondition*)res;
}
