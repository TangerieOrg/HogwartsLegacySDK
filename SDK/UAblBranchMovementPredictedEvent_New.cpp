#include "UAblBranchMovementPredictedEvent_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchMovementPredictedEvent_New* UAblBranchMovementPredictedEvent_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchMovementPredictedEvent_New");
    return (UAblBranchMovementPredictedEvent_New*)res;
}
