#include "ECreatureNavLinkType.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblCreatureNavLinkCondition.hpp"
UAblCreatureNavLinkCondition* UAblCreatureNavLinkCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureNavLinkCondition");
    return (UAblCreatureNavLinkCondition*)res;
}
