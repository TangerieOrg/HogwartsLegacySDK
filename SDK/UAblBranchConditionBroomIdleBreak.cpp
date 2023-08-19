#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionBroomIdleBreak.hpp"
UAblBranchConditionBroomIdleBreak* UAblBranchConditionBroomIdleBreak::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionBroomIdleBreak");
    return (UAblBranchConditionBroomIdleBreak*)res;
}
