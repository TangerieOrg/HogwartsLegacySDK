#include "EAblNpcCollisionDetectionType.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblNpcCollisionBranchCondition.hpp"
UAblNpcCollisionBranchCondition* UAblNpcCollisionBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCollisionBranchCondition");
    return (UAblNpcCollisionBranchCondition*)res;
}
