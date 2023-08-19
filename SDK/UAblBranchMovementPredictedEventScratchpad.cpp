#include "UAblBranchMovementPredictedEventScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UMovementPredictionComponent.hpp"
UAblBranchMovementPredictedEventScratchpad* UAblBranchMovementPredictedEventScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchMovementPredictedEventScratchpad");
    return (UAblBranchMovementPredictedEventScratchpad*)res;
}
