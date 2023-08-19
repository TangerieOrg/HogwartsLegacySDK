#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionQuadrupedSpineAngle.hpp"
UAblBranchConditionQuadrupedSpineAngle* UAblBranchConditionQuadrupedSpineAngle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionQuadrupedSpineAngle");
    return (UAblBranchConditionQuadrupedSpineAngle*)res;
}
