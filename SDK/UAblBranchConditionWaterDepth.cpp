#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionWaterDepth.hpp"
UAblBranchConditionWaterDepth* UAblBranchConditionWaterDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionWaterDepth");
    return (UAblBranchConditionWaterDepth*)res;
}
