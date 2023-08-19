#include "UAblBranchCondition.hpp"
#include "UAblBranchMovementPredictedCollision.hpp"
UAblBranchMovementPredictedCollision* UAblBranchMovementPredictedCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchMovementPredictedCollision");
    return (UAblBranchMovementPredictedCollision*)res;
}
