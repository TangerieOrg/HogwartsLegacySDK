#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsTesting.hpp"
UAblBranchConditionIsTesting* UAblBranchConditionIsTesting::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsTesting");
    return (UAblBranchConditionIsTesting*)res;
}
