#include "ECreatureFlightState.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionDesiredFlightState.hpp"
UAblBranchConditionDesiredFlightState* UAblBranchConditionDesiredFlightState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionDesiredFlightState");
    return (UAblBranchConditionDesiredFlightState*)res;
}
