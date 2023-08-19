#include "UAblCanRagdollRecoverBranchCondition.hpp"
#include "UAblTaskCondition.hpp"
UAblCanRagdollRecoverBranchCondition* UAblCanRagdollRecoverBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCanRagdollRecoverBranchCondition");
    return (UAblCanRagdollRecoverBranchCondition*)res;
}
