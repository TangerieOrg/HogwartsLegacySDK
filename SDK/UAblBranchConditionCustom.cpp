#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionCustom.hpp"
UAblBranchConditionCustom* UAblBranchConditionCustom::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchConditionCustom");
    return (UAblBranchConditionCustom*)res;
}
