#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionOnInput.hpp"
UAblBranchConditionOnInput* UAblBranchConditionOnInput::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchConditionOnInput");
    return (UAblBranchConditionOnInput*)res;
}
