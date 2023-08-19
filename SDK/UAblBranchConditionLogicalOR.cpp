#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionLogicalOR.hpp"
UAblBranchConditionLogicalOR* UAblBranchConditionLogicalOR::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchConditionLogicalOR");
    return (UAblBranchConditionLogicalOR*)res;
}
