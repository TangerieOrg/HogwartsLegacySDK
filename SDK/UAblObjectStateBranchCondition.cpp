#include "EObjectStateBranchCondition.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblObjectStateBranchCondition.hpp"
UAblObjectStateBranchCondition* UAblObjectStateBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectStateBranchCondition");
    return (UAblObjectStateBranchCondition*)res;
}
