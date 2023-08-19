#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionJumpHeight.hpp"
UAblBranchConditionJumpHeight* UAblBranchConditionJumpHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionJumpHeight");
    return (UAblBranchConditionJumpHeight*)res;
}
