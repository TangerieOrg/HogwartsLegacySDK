#include "ECreatureLandingType.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionDesiredLandingType.hpp"
UAblBranchConditionDesiredLandingType* UAblBranchConditionDesiredLandingType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionDesiredLandingType");
    return (UAblBranchConditionDesiredLandingType*)res;
}
