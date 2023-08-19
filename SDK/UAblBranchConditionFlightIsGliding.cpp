#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionFlightIsGliding.hpp"
UAblBranchConditionFlightIsGliding* UAblBranchConditionFlightIsGliding::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionFlightIsGliding");
    return (UAblBranchConditionFlightIsGliding*)res;
}
