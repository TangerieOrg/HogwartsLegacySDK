#include "UAblBranchCondition.hpp"
#include "UAblBranchIsBroomMoving.hpp"
UAblBranchIsBroomMoving* UAblBranchIsBroomMoving::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchIsBroomMoving");
    return (UAblBranchIsBroomMoving*)res;
}
