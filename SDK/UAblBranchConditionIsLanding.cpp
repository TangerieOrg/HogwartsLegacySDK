#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsLanding.hpp"
UAblBranchConditionIsLanding* UAblBranchConditionIsLanding::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsLanding");
    return (UAblBranchConditionIsLanding*)res;
}
