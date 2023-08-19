#include "UAblBranchCondition.hpp"
#include "UAblBranchMovementPredictedEvent.hpp"
UAblBranchMovementPredictedEvent* UAblBranchMovementPredictedEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchMovementPredictedEvent");
    return (UAblBranchMovementPredictedEvent*)res;
}
