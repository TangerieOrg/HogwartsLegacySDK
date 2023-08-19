#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionFlightGliding.hpp"
UAblBranchConditionFlightGliding* UAblBranchConditionFlightGliding::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionFlightGliding");
    return (UAblBranchConditionFlightGliding*)res;
}
