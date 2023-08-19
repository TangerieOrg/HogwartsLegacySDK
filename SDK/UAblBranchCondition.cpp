#include "UAblBranchCondition.hpp"
#include "UObject.hpp"
UAblBranchCondition* UAblBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchCondition");
    return (UAblBranchCondition*)res;
}
