#include "UAblBranchCondition.hpp"
#include "UablBranchCreatureIsMountCondition.hpp"
UablBranchCreatureIsMountCondition* UablBranchCreatureIsMountCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBranchCreatureIsMountCondition");
    return (UablBranchCreatureIsMountCondition*)res;
}
