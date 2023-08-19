#include "EJumpingType\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionJumpType.hpp"
UAblBranchConditionJumpType* UAblBranchConditionJumpType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionJumpType");
    return (UAblBranchConditionJumpType*)res;
}
