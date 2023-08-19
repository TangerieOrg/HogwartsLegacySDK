#include "UAblBranchActorTagCondition.hpp"
#include "UAblBranchCondition.hpp"
UAblBranchActorTagCondition* UAblBranchActorTagCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchActorTagCondition");
    return (UAblBranchActorTagCondition*)res;
}
