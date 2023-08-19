#include "FName_GameLogicBoolResult.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionGameLogic.hpp"
UAblBranchConditionGameLogic* UAblBranchConditionGameLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionGameLogic");
    return (UAblBranchConditionGameLogic*)res;
}
